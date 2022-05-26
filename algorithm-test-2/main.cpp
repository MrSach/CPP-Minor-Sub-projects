#include <iostream>
#include <deque>
#include <algorithm>

/*

	Program
		C++ STL Algorithm - Basic - Test 2 with the use of std::for_each
	
	Description
		Like the previous example, this program uses the std::for_each function.
		However, for variation, a different STL container, std::deque, has been used instead.
		The output is also slightly different, in that the function object directly outputs the original value of its parameter, as opposed to the previous example, whcich output the value x + 1.
		The data type of the deque is now a double floating point value, but the general principles of using STL containers, iterators and algorithms remain consistent.
		Like std::array, std::deque can also make use of the std::for_each algorithm function.
		In order to understand how to apply a function pointer to an STL Algorithm function, the function pointer has been called directly with no special operators or syntax.
		It is simply called using function_ptr, no (de)referencing needed, or brackets are required in this case, so it is very easy to use.
	
	Author
		Sacha

	Date
		30.1.2022

*/

//This example uses a function pointer instead of a functor object.
void function_ptr (double x)
{
	//Output the value of x and add a space afterwards
	std::cout << x;
	std::cout << " ";
}

//Main function
int main (int argc, char * * argv)
{
	//Output title with line breaks
	std::cout << "alg test 2";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare a variable of type deque, which contains double floating point values.
		Name this variable d1.
		Initialise with some programmer-defined dummy data.
	*/
	std::deque <double> d1 {3.6, 8.1, 9.0, 11.56, 43.11};
	
	/*
		STL Algorithm function called.
		std::for_each takes the iterator for the first element in the deque, the iterator for the last element in the array, and then the function pointer (not an instance!) is finally defined as the code to execute for each element in the STL container.
	*/
	std::for_each (d1.begin (), d1.end (), function_ptr);
	
	//Output line breaks at the end of the program.
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
