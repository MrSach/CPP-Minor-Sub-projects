/*
	Test object, "obj"
	This object serves the purpose of exploring further how the constructors and copy constructors in C++ work.
*/

#include <iostream>

#include "obj.hpp"

/*
	No-Arguments Constructor.
	Initialise "var_int" to a value of 10.
	Initialise "var_ptr" with new memory on the heap.
	Initialise the pointer's variable to a value of 25. 
*/
obj::obj ()
:
	var_int {10},
	var_ptr {new int {25} }
{

}

/*
	Destructor.
*/
obj::~obj ()
{
	/*
		Deallocate "* var_ptr" from the heap, along with the target memory address.
	*/
	delete var_ptr;
}

/*
	Copy Constructor.
	Takes an argument of type "obj". 
*/
obj::obj (const obj & source)
:
	/*
		Initialise "var_int" to the same value as the parameter's "var_int".
		Initialise "var_ptr" with new memory allocated on the heap.
		Initialise the "* var_ptr" variable to the same value as the parameter's "* var_ptr" variable.
	*/
	var_int {source.var_int},
	var_ptr {new int {* source.var_ptr} }
{
	
}

/*
	Display object data.
	Displays some of the data for the current object using this member method.
*/
void obj::display_data ()
{
	/*
		Outputs memory address of the current object.
	*/
	std::cout << "Displaying data of object ";
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Outputs the memory address reference for the member variable "var_int".
	*/
	std::cout << "var_int address = ";
	std::cout << & (this->var_int);
	std::cout << std::endl;
	
	/*
		Outputs the value of "var_int".
	*/
	std::cout << "var_int value = ";
	std::cout << this->var_int;
	std::cout << std::endl;
	
	/*
		Outputs the reference of the memory location of "var_ptr".
	*/
	std::cout << "var_ptr address = ";
	std::cout << & (this->var_ptr);
	std::cout << std::endl;
	
	/*
		Outputs the reference of "* var_ptr", which is the target memory location.
	*/
	std::cout << "* var_ptr address = ";
	std::cout << this->var_ptr;
	std::cout << std::endl;
	
	/*
		Outputs the dereferenced value of pointer "* var_ptr".
	*/
	std::cout << "* var_ptr value = ";
	std::cout << * (this->var_ptr);
	std::cout << std::endl;
	std::cout << std::endl;
	
}
