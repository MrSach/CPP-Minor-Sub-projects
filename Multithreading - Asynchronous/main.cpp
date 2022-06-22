/*

	Program
		Multithreading - Asynchronous.
	
	Description
		Terminal program.
		Demonstrates the use of multithreading in C++ through the std::thread library.
		Three threads have been defined using different methods: a functor object, a function pointer, and a lambda function.
		As this design is asynchronous, it is not thread-safe because there are no controls to actively prevent the program from prematurely exiting a thread.
		After a few runs, reviewing the output should reveal some lines will show the next line spilling into the current line of output, with the line break appearing elsewhere instead.
	
	Author
		Sacha

	Date
		15.2.2022

*/

#include <iostream>
#include <thread>
#include <functional>

/*
	Function "foo".
	This is the Function Pointer.
	Take a parameter, which is a positive integer value.
*/
void foo (size_t x)
{
	/*
		Loop the number of times matching the value of the parameter.
	*/
	for (size_t i {0}; i < x; i++)
	{
		/*
			Indicate that the program is in the thread for the Function Pointer function.
		*/
		std::cout << "Function Pointer called" << std::endl;
	}
}

/*
	Function "foo2".
	This is the Functor Object.
	Take a parameter, which is a positive integer value.
*/
class foo2
{
public:
	/*
		Operator () definition.
		Add a parameter for passing through a positive integer value.
	*/
	void operator () (size_t x)
	{
		/*
			Loop the number of times matching the value of the parameter.
		*/
		for (size_t i {0}; i < x; i++)
		{
			/*
				Indicate that the program is in the thread for the Functor Object.
			*/
			std::cout << "Function Object called" << std::endl;
		}
	}
};

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Multithreading - Asynchronous";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Function "foo3".
		This is a Lambda Function.
		Take a parameter, which is a positive integer value.
	*/
	std::function <void (size_t)> foo3
	{
		/*
			Empty capture list as this is stateless.
		*/
		[]
		(size_t x)
		{
			/*
				Loop the number of times matching the value of the parameter.
			*/
			for (size_t i {0}; i < x; i++)
			{
				/*
					Indicate that the program is in the thread for the Lambda Function.
				*/
				std::cout << "Lambda Function called" << std::endl;
			}
		}
	};
	
	/*
		Declare the threads and select a different function implementation for each one.
		Pass in 1000 as the number of times to loop in each example as this should be able to demonstrate the program changing between the different threads before they have finished executing.
		Note that the Functor Object requires the brackets for the "()" operator to be invoked.
	*/
	std::thread t1 (foo, 1000);
	std::thread t2 (foo2 (), 1000);
	std::thread t3 (foo3, 1000);
	
	/*
		Add the threads to the program to be executed.
	*/
	t1.join();
	t2.join();
	t3.join();
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
