/*
	"obj" object.
	cpp source file. 
*/

#include "obj.hpp"
#include <iostream>

/*
	No-Args Contructor.
*/
obj::obj()
:
	/*
		Call the Delegated Constructor - Single Character Argument.
		Pass in '0' as the default value. 
	*/
	obj::obj {'0'}
{
	/*
		
	*/
	std::cout << "No-Args Constructor called.";
	std::cout << std::endl;
	std::cout << "New object memory address = ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Constructor - Single Character Parameter.
*/
obj::obj (char var1)
:
	/*
		Initialise member attribute "ch" to the value provided by the character parameter.
		Initialise raw pointer member attribute to a new integer allcoated in memory on the heap.
		Initialise the new integer variable to 0.
	*/
	ch {var1},
	ptr {new int {0} }
{
	/*
		Verbose object report.
		Notify that this constructor has been called.
		Output memory address for new object.
	*/
	std::cout << "Constructor - Single Character Parameter called.";
	std::cout << std::endl;
	std::cout << "New object memory address = ";
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Typecast character memory address from char * to void *.
		Output this to the terminal console.
	*/
	std::cout << "ch at location (with void * typecast) ";
	std::cout << static_cast <void *> (& (this->ch));
	std::cout << std::endl;
	std::cout << "ch value = ";
	std::cout << this->ch;
	std::cout << std::endl;
	
	/*
		Get the source and target memory addresses for the raw pointer memory attribute.
		Dereference to get the value of the pointer.
	*/
	std::cout << "ptr source memory location = ";
	std::cout << & (this->ptr);
	std::cout << std::endl;
	std::cout << "ptr target memory location = ";
	std::cout << this->ptr;
	std::cout << std::endl;
	std::cout << "* ptr = ";
	std::cout << * (this->ptr);
	std::cout << std::endl;
	
	std::cout << std::endl;
	
}

/*
	Destructor
*/
obj::~obj()
{
	/*
		Deallocate the raw pointer data!
	*/
	delete ptr;
}

/*
	Copy Constructor
*/
obj::obj (const obj & source)
:
	/*
		Initialise the new object's attributes using the source object's data.
		For raw pointers the memory also needs to be dynamically allocated before initialising a value for their respective variable.
	*/
	ch {source.ch},
	ptr {new int {* source.ptr} }
{
	/*
		Notify the user that the Copy Constructor has been called.
	*/
	std::cout << "Copy Constructor called for object";
	std::cout << std::endl;
	
	/*
		Output the new object memory address.
	*/
	std::cout << "New object memory address = ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Obj Move Constructor
*/
obj::obj (obj && source)
:
	/*
		Initialise member attributes to the same values and target pointer locations as the source object.
	*/
	ch {source.ch},
	ptr {source.ptr}
{
	/*
		Notify the user that the Move Constructor has been called.
	*/
	std::cout << "Move constructor called.";
	std::cout << std::endl;
	
	/*
		Output the new object memory address.
	*/
	std::cout << "New object memory address = ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Clear any target raw pointer references from the source object member attributes. 
	*/
	source.ptr = nullptr;
}

/*
	Method - get the memory address of the current object.
*/
void * obj::get_ch_location ()
{
	/*
		Use typecasting to convert the value of the memory address of the C character for the correct output.
	*/
	return static_cast <void *> (& (this->ch));
}
