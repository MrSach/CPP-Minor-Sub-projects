/*

	Program
		Object Raw Pointers - Move Constructor - Test 3
	
	Description
		Terminal program.
		Tests the Move Constructor for an example object with raw pointers.
	
	Author
		Sacha

	Date
		21.12.2021, revised 17.6.2022

*/

#include <iostream>
#include <utility>
#include "obj.hpp"

/*
	Non-Member Function, takes an obj object rvalue.
	This calls the obj object's method "display_attr ()".
*/
void obj_rval_test (obj && source)
{
	/*
		Call the method to display the object information.
	*/
	source.display_attr ();
}

/*
	Main function.
*/
int main (int argc, char ** argv)
{
	/*
		Program title.
		Line breaks.
	*/
	std::cout << "Object Raw Pointers - Move Constructor - Test 3";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare obj.
		Name this "test1".
		Call the No-Args Constructor.
	*/
	obj test1;
	
	/*
		Declare obj.
		Name this "test2".
		Call the obj Constructor and pass 25 as an integer argument.
	*/
	obj test2 (25);
	
	/*
		Declare obj.
		Name this "test3".
		Call the obj Copy Constructor and pass in obj "test3" as the argument.
	*/
	obj test3 = test1;
	
	/*
		Call the program function, "obj_rval_test", and pass in a temporary obj rvalue with an integer argument of 33 for the Constructor.
	*/
	obj_rval_test(obj(33));
	
	/*
		Declare obj.
		Name this "test4".
		Call the Move Constructor.
		Pass in a temporary "obj" object.
		For this temporary "obj", call the Constructor and pass in a single integer value of 202.
	*/
	obj test4 {std::move (obj (202) ) };
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
