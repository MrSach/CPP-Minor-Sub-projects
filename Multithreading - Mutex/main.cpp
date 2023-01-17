/*

	Program
		Multithreading - Mutex Example 1.
	
	Description
		Terminal program.
		Demonstrates a means to handle thread safety through the C++ STL mutex library.
		As demonstrated in a previous subproject, which used multithreading without thread locking, the output appeared to be corrupted through alternating between concurrent threads prematurely.
		Race conditions give potential for undefined behaviour.
		The mutex incorporates threadlocking in order to control the progression between threads that access or write to common resources.
	
	Author
		Sacha

	Date
		2.11.2022

*/

#include <iostream>
#include <thread>
#include <functional>
#include <mutex>

/*
	Functor Object - define the function to be used in multithreading.
	This is the object used to contain the functions to call from the std::thread objects.
*/
class f_obj
{
protected:

	/*
		Object ID - determines the ID, which is unique for each instance.
		This is used to display which thread appears in the output during execution.
	*/
	size_t obj_id;
	
	/*
		The static attribute determines how many objects have been created since the beginning of the program.
		As threads are executed and respective objects are deleted, this number needs to remain unaffected by class destructors.
	*/
	static size_t obj_count;
	
public:
	/*
		Constructor - declaration.
	*/
	f_obj ();
	
	/*
		Destructor - declaration.
	*/
	~ f_obj () = default;
	
	/*
		Functor Object - declaration.
		Parameters:
			-Unsigned whole number, which is declared as a constant here.
			 This number is used to determine the number of loops.
			-Mutex, which uses the reference as passed in by the argument through std::ref with the mutex variable passed through from main ().
	*/
	void operator () (const size_t x, std :: mutex & m_ref);
	
};

/*
	Initialise obj_count as a global variable.
*/
size_t f_obj :: obj_count = 1;

/*
	Constructor - definition
*/
f_obj :: f_obj ()
:
	/*
		Initialise object instance with "obj_id".
		Set the value to the value of "obj_count", which is the number of object instances.
	*/
	obj_id { obj_count }
{
	/*
		Increment the value of the number of object instances, the "f_obj :: obj_count" attribute.
		Remember that this is static, so the data is consistent across the entire class and is therefore not attached to any single object instance.
	*/
	++ f_obj :: obj_count;
}

/*
	operator () - definition.
	As aforementioned, pass the number of iterations to loop, along with the target mutex, through the parameter.
	A reference is required as mutexes are not designed to be copyable.
	Even if the mutex could be copied, the references would target different memory locations for each thread created from outside the function and thus would defeat the purpose of sharing the resource for the mutex.
	Remember that the mutex reinforces thread safety and without it, or an equivalent thread-controlling process, the race conditions would easily recur.
*/
void f_obj :: operator () (const size_t x, std :: mutex & m_ref)
{
	
	/*	
		This is the lock guard for the mutex.
		Unlike using a global mutex variable, this is declared from within the function using the reference passed in as a parameter from elsewhere in the program.
		The mutex lock command, m_ref.lock (), is not called.
		Instead, a lock guard is initialised and remains until the relevant block of code terminates.
		Through Resource Acquisition is Initialised (RAII), threadlocking takes place automatically without requiring further manual configuration here.
	*/
	std :: lock_guard < std :: mutex > local_m ( m_ref );
	
	/*
		Add a spacer to the following output.
	*/
	std::cout << std::endl;
	
	/*
		Loop the number of times matching the value of the parameter.
	*/
	for (size_t i {0}; i < x; i++)
	{
		/*
			Indicate that the program is in the thread for the Functor Object.
		*/
		std::cout << "Thread ";
		std::cout << this -> obj_id;
		std::cout << " running" << std::endl;
	}

	/*
		Output a spacer at the end of the function.
	*/
	std::cout << std::endl;
}

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Multithreading - Mutex Example 1";
	std::cout << std::endl;
	std::cout << std::endl;

	/*
		Declare a mutex.
		In this case, the mutex is a local object in the main function and therefore only has a scope from within this function.
	*/
	std::mutex thread_safety_net;
	
	/*
		Declare three threads with the same function object.
		Pass in 1000 as the number of times to loop in each example as this should be able to demonstrate the program changing between the different threads before they have finished executing.
		Use the same arguments for each object instance.
	*/
	std::thread t_1 (f_obj (), 1000, std :: ref ( thread_safety_net ) );
	std::thread t_2 (f_obj (), 1000, std :: ref ( thread_safety_net ) );
	std::thread t_3 (f_obj (), 1000, std :: ref ( thread_safety_net ) );
	
	/*
		Add the threads to the program to be executed.
	*/
	t_1.join ();
	t_2.join ();
	t_3.join ();
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	return 0;
}
