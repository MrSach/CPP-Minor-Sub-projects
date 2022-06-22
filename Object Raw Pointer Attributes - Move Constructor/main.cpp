/*

	Program
		Object Raw Pointer Attributes - Move Constructor
	
	Description
		Terminal program.
		Demonstrates declaration of an object with a raw pointer member attribute.
		The major focus is for the purpose of learning how to use move constructors with raw pointer members.
		Unlike the copy constructor, the move constructor would assign the target memory location as the value to assign to the pointer to the new object, and in turn, also null the reference targeted by the existing temporary object.
		In other words, the reference is copied from the temporary object to the new object, but then the temporary object's reference is nulled, in order to protect the memory of that raw pointer.
		Remember that the move constructor serves to buffer an existing rvalue object's data to a new lvalue object.
		Copy Constructors incur much greater overhead than Move Constructors.
		In addition to checking if the pointers are populated with an existing reference (i.e. not nullptr), they need to dereference all the raw pointers, allocate new memory for each raw pointer attribute for the new object, and to then copy the data for each variable for their respective pointer.
		Move Constructors, in contrast, simply assign the target memory locations to the new pointer object, and then null them for the existing objects.
		No new memory has to be dynamically allocated.
		No pointers even need to be dereferenced.
		No data for raw pointer variables needs to be copied.
		Just check what pointer memory locations should be copied to the new object, copy the relevant ones and then null them for the temporary object.
		Simple.
		This also reviews the handling of different data types, including C characters on the stack.
	
	Author
		Sacha

	Date
		20.1.2022, revised 31.5.2022

*/

#include <iostream>
#include <utility>
#include "obj.hpp"

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Move constructors - 1";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		"obj" objects declared.
		No-Args Cosntructor is called here.
	*/
	obj test1;
	obj test2;
	
	/*
		"obj" object declared and initialised with move constructor.
	*/
	obj test3 {std::move (obj ('a') ) };
	
	std::cout << std::endl;
	
	/*
		Get the memory location of the character member attribute.
	*/
	std::cout << test3.get_ch_location();
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
