/*
	Program
		Smart Pointers - Objects
	
	Description
		Terminal program.
		Demonstrates the use of unique and shared pointers for objects.
	
	Author
		Sacha

	Date
		24.6.2022
*/

#include <iostream>
#include <memory>

#include "obj.hpp"

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "Smart Pointers - Objects";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare instance of "obj".
		Initialise with no arguments.
	*/
	std::unique_ptr <obj> obj_1
	{
		std::make_unique <obj> ()
	};
	
	/*
		Get the object's name for "obj_1".
	*/
	obj_1 -> output_obj_name ();
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare instance of "obj".
		Initialise with argument of "OBJECT".
	*/
	std::shared_ptr <obj> obj_2
	{
		std::make_shared <obj>
		(
			"OBJECT"
		)
	};
	
	/*
		Get the object's name for "obj_2".
	*/
	obj_2 -> output_obj_name ();
	
	std::cout << std::endl;
	std::cout << std::endl;
	
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

