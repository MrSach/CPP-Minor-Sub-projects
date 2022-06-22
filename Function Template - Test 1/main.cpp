/*

	Program
		Function Template - Test 1
	
	Description
		Testing Function Templates in C++
	
	Author
		Sacha

	Date
		29.1.2022

*/

#include <iostream>
#include <string>

/*
	Function template with generic data type.
	Accepts two parameters, which are of identical data types.
	Calculates the total of the two parameters and returns the value.
	Note that the return type is the same as the parameter types.
*/
template <typename A1>
A1 some_function (const A1 & v1, const A1 & v2)
{
	return (v1 + v2);
}

/*
	Main function.
*/
int main (int argc, char ** argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Template testing 1 - function templates";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare and intialise two test integers.
	*/
	int a {1};
	int b {11};
	
	/*
		Integer processing.
	*/
	std::cout << some_function (a, b);
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare and initialise two booleans.
	*/
	bool c {1};
	bool d {1};
	
	/*
		Boolean processing.
	*/
	std::cout << some_function (c, d);
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare two strings and initialise as below.
	*/
	std::string e {"Hello "};
	std::string f {"World!"};
	
	/*
		String processing.
	*/
	std::cout << some_function (e, f);
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Tidy with line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
