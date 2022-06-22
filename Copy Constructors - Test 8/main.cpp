/*

	Program
		Copy Constructor - Test 8
	
	Description
		Program to explore the C++ constructors and copy constructors
	
	Author
		Sacha

	Date
		18.12.2021, revised 6.6.2022.

*/

#include <iostream>

#include "obj.hpp"

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Object copy constructor test 8";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Create new object without argument.
		"obj" - No-Arguments Constructor.
	*/
	obj obj_a;
	
	/*
		Manually output message to terminal.
	*/
	std::cout << "Created obj_a";
	std::cout << std::endl;
	
	/*
		Create new object using existing object.
		Call "obj" Copy Constructor, pass in "obj_a" as argument.
	*/
	obj obj_b (obj_a);
	
	/*
		Display data for object A.
	*/
	obj_a.display_data ();
	
	/*
		Display data for object B.
	*/
	obj_b.display_data ();

	return 0;
}
