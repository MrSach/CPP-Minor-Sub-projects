/*

	Program
		Copy Constructor Testing - Test 3
	
	Description
		Program that demonstrates the use of the C++ Copy Constructor.
		Information is provided through the terminal as to whether the object was created or if it was copied from another object of the same type.
		The memory address is output, along with the variable test_int_1, which will be 0 by default, unless a different value is specified.
	
	Author
		Sacha

	Date
		19.10.2021, revised 7.6.2022.

*/

#include <iostream>

#include "practice_test_obj.hpp"

/*
	Main function.
*/
int main ()
{
	/*
		Cosntructor - single integer argument.
	*/
	practice_test_obj obj1 (11);
	
	/*
		Copy Constructor - pass in "obj" argument.
	*/
	practice_test_obj obj2 (obj1);
	
	/*
		Constructor - No-Arguments.
	*/
	practice_test_obj obj3;
	
	return 0;
}
