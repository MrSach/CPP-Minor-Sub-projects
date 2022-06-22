/*

	Program
		C++ STL Algorithms - Basic - Test 1 with the std::for_each function.
	
	Description
		Testing the C++ STL Algorithm functions.
		A predefined std::array of a few elements is declared and initialised.
		The function object Testing is declared and a local variable x is defined for this function as a function parameter.
		The routine for Testing outputs the value of x + 1, along with a space, to the output stream, which is the terminal console, in this case.
		The std::for_each command is then called with the start of the array t1, t1.end(), the end defined as the end of the same array, t1.end(), and the function object instance of Testing, test1, which is passed as the argument at the end of the algorithm function call.
		This loops through the STL container and outputs the elements for each element in the array, as per the design of the STL algorithm function std::for_each.
	
	Author
		Sacha

	Date
		30.1.2022

*/

#include <iostream>
#include <array>
#include <algorithm>
#include <memory>

/*
	Function object definition.
*/
struct Testing
{
public:
	void operator () (int x)
	{
		/*
			Output value of x + 1, followed by a spacebar.
		*/
		std::cout << x + 1;
		std::cout << " ";
	}
};
/*
	Note the semicolon, this is an object!
*/

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Program introduction with title.
	*/
	std::cout << "Algorithm test 1";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare array of type int and with 5 elements
		t1 is assigned a sequence of 5 consecutive odd numbers
	*/
	std::array <int, 5> t1 {1, 3, 5, 7, 9};
	
	/*
		Declare an instance of function object Testing before calling the algorithm function.
	*/
	Testing test1;
	
	/*
		STL algorithm function call here.
		Pass in the beginning of the array.
		Then pass in the end of the array.
		Then pass in the function object instance, which has been defined earlier.
		This can be very confusing, especially as there are also other options, such as function pointers and lambda functions!
	*/
	std::for_each (t1.begin (), t1.end (), test1);
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
