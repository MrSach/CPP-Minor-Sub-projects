/*
	Program
		Multithreading with Mutex - C array of Thread objects

	Description
		Terminal program.
		Attempt to multithread with multiple threads through a C-style array.
		This uses a mutex that is shared across the class, which is declared as static.
		The mutex in this example is declared as an attribute that belongs to the function object class itself.
		There is therefore no need to pass a mutex when instantiating new threads as the mutex is contained within the class definition and not as a separate variable from outside the class.

	Author
		Sacha

	Date
		17.1.2022
*/

#include <iostream>
#include <thread>
#include <mutex>

/*
	Function object.
	"threadable" is a class that is designed to be used as a function object.
	"obj_count" is the total number of class instances created.
	"obj_id" is the ID of the specific instance of the class.
	"mu" is a mutex.
	"mu" is declared inline so it can be initialised, along with being declared static, which allows for the mutex to be accessible across the entire class.
	The operator () is overridden in order to allow for the target function to execute when passed into the std::thread constructor.
*/
class threadable
{
protected:
	inline static size_t obj_count {0};
	size_t obj_id;
	inline static std::mutex mu {};

public:
	threadable ();
	~threadable () noexcept;
	void operator () ();
};

/*
	"threadable" - Constructor.
	Incremenet "obj_count" by 1.
	Initialise "obj_id" to "obj_count" for the new instance of "threadable".
*/
threadable :: threadable ()
:
	obj_id {++ threadable :: obj_count}
{
	
}

/*
	"threadable" - Destructor
*/
threadable :: ~ threadable ()
{
	
}

/*
	"threadable" - operator ().
	This is the function to be called when instantiating a new std::thread object.
	Begin the function with a lock guard.
	This protects the output stream so only one thread can write to it at a time.
	Enter a loop to perform output 100 times for each object.
	For each line, output the thread ID, along with the memory address of the specific object.
*/
void threadable :: operator () ()
{
	std::lock_guard <std::mutex> lg (threadable::mu);
	for (size_t i {0}; i < 100; ++i)
	{
		std::cout << "Thread ";
		std::cout << std::dec;
		std::cout << this -> obj_id;
		std::cout << std::endl;
		std::cout << "Object ";
		std::cout << std::hex;
		std::cout << this;
		std::cout << std::endl;
	}
}

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "C-style array - multithreading attempt";

	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;

	/*
		Declare "t_arr" as a thread with 10 elements.
	*/
	std::thread t_arr[10];

	/*
		Loop through each instance of "t_arr".
		Assign a new thread with "threadable ()" as the argument to pass through as the function to bind to that new thread.
	*/
	for (size_t i = 0; i < 10; ++i)
	{
		t_arr [i] = std::thread (threadable () );
	}

	/*
		As 10 threads have been generated, they need to be joined.
		Loop through the 10 elements in the array and join each instance.
	*/
	for (size_t i = 0; i < 10; ++i)
	{
		t_arr [i].join ();
	}

	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;

	/*
		Return status - successful program execution.
	*/
	return 0;
}

