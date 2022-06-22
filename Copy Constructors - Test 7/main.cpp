/*

	Program
		C++ Copy Constructor - Test 7
	
	Description
		Explores the workings behind the C++ Constructors and Copy Constructors for objects with multiple types of data.
		This program focuses on the memory locations accessed and written to during the processes involved in the constructors and copy constructors.
	
	Author
		Sacha

	Date
		10.10.2021, revised 6.6.2022.

*/

#include <iostream>

#include "obj.hpp"

/*
	Main function
*/
int main ()
{
	/*
		Constructor - No Arguments.
	*/
	obj obj1;
	
	/*
		Copy Constructor.
		Pass in "obj1" as argument.
	*/
	obj obj2 (obj1);
	
	/*
		Line break.
	*/
	std::cout << std::endl;
	
	/*
		Debug information - get the bytes allocated on the stack for obj1.
	*/
	std::cout << "Size of object \"obj1\" = ";
	std::cout << sizeof (obj1);
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Constructor - 2 integer arguments.
	*/
	obj obj3 (11, 88);
	
	/*
		Another example of the Copy Constructor.
		Use "obj3" as the argument.
	*/
	obj obj4 (obj3);
	
	/*
		Use the method to display the object metadata and attributes.
	*/
	obj3.display_metadata ();
	obj4.display_metadata ();
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
	
}
