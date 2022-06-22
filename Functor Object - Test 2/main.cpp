/*

	Program
		Functor Object - Test 3
	
	Description
		Program to output "HELLO" as many times as there are elements in an STL Container
	
	Author
		Sacha

	Date
		3.2.2022

*/

#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

/*
	Functor Object
*/
struct obj
{
	/*
		Prints "HELLO" to the output stream.
	*/
	void operator () (int x)
	{
		std::cout << "HELLO";
		std::cout << std::endl;
	}
};


int main(int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Functor Object - Test 3";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		STL Container - vector in this case.
	*/
	std::vector <int> v {1, 1, 1, 1};
	
	/*
		STL Algorithm - for_each command here.
		Calls the functor object to execute.
	*/
	std::for_each (v.begin (), v.end (), obj ());
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
