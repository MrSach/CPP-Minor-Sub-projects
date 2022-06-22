/*
	obj source file.
*/

#include "obj.hpp"

#include <iostream>

/*
	No-Arguments Constructor.
	Delegates to the Constructor with 2 integer arguments.
	This passes the value of 0 for both of the arguments.
	When delegating to another Constructor, the Delegated Constructor's main block of code will execute BEFORE the block of code for the Constructor that called it!
	So, when the No-Arguments Constructor is called from this function, the Delegated Constructor output is seen before the output for this function.
*/
obj::obj ()
:
	obj {0, 0}
{
	std::cout << "No-Arguments Constructor has been called." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Destructor.
	Output the messages to the terminal to notify the user that the destructor for obj has been called.
	Also output the specific object using the "this" pointer, which shows the memory address location of the specific object on the stack.
	As ptr is a raw pointer, this needs to be deallocated before the object is deleted.
	Finish with two tidy line breaks.	
*/
obj::~obj ()
{
	std::cout << "Destructor has been called." << std::endl;
	std::cout << "Delete \"obj\" object at location " << this << std::endl;
	delete this->ptr;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	"obj" - Constructor - 2 integer parameters.
*/
obj::obj (const int num, const int num2)
:
	/*
		Initalise "data" with the value of "num".
		Initialise "ptr" with new memory location.
		Initialise "* ptr" with the value of "num2".
	*/
	data {num},
	ptr {new int {num2} }
{
	/*
		Notify user that the Constructor with 2 integer parameters has been called.
	*/
	std::cout << "Constructor called with 2 integer parameters.";
	std::cout << std::endl;
	
	/*
		Output the value of "num".
	*/
	std::cout << "Local variable num = ";
	std::cout << num;
	std::cout << std::endl;
	
	/*
		Output the value of "num2".
	*/
	std::cout << "Local variable num2 = ";
	std::cout << num2;
	std::cout << std::endl;
	
	/*
		Output location of the new object.
	*/
	std::cout << "Object created at location ";
	std::cout << this;
	std::cout << std::endl;

	/*
		Output metadata for "data".
	*/
	std::cout << "& data = ";
	std::cout << & (this->data);
	std::cout << std::endl;
	std::cout << "data = ";
	std::cout << this->data;
	std::cout << std::endl;
	
	/*
		Display metadata for the pointer's address in memory and the new location that it currently targets.
	*/
	std::cout << "& ptr = ";
	std::cout << & (this->ptr);
	std::cout << std::endl;
	std::cout << "ptr = ";
	std::cout << this->ptr;
	std::cout << std::endl;
	
	/*
		Output the value of "* ptr".
	*/
	std::cout << "* ptr = ";
	std::cout << * (this->ptr);
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Copy Constructor.
	Takes an obj argument.
	Copies the values of the existing object to the new object.
*/
obj::obj (const obj & source)
:
	/*
		Initialise "data" for new object.
		Use the existing object's value for the corresponding variable.
		Also initialise "ptr".
		Allocate memory dynamically.
		Initialise the pointer's variable and use the existing object's value for its respective varaible.
	*/
	data {source.data},
	ptr
	{
		new int
		{
			* source.ptr
		}
	}
{
	/*
		Output verbose report for the objects and member attributes.
	*/
	std::cout << "Copy constructor called.";
	std::cout << std::endl;
	
	std::cout << "Source object located at memory address ";
	std::cout << & source;
	std::cout << std::endl;
	
	std::cout << "Source object \"& data\" =  ";
	std::cout << & (source.data);
	std::cout << std::endl;
	std::cout << "Source object \"data\" = ";
	std::cout << source.data;
	std::cout << std::endl;
	
	std::cout << "Source object \"& ptr\" =  ";
	std::cout << & (source.ptr);
	std::cout << std::endl;
	std::cout << "Source object \"ptr\" =  ";
	std::cout << source.ptr;
	std::cout << std::endl;
	std::cout << "Source object \"* ptr\" =  ";
	std::cout << * (source.ptr);
	std::cout << std::endl;
	
	std::cout << "New object assigned memory location of ";
	std::cout << this;
	std::cout << std::endl;
	
	std::cout << "New object \"& data\" =  ";
	std::cout << & (this->data);
	std::cout << std::endl;
	std::cout << "New object \"data\" =  ";
	std::cout << this->data;
	std::cout << std::endl;
	
	std::cout << "New object \"& ptr\" =  ";
	std::cout << & (this->ptr);
	std::cout << std::endl;
	std::cout << "New object \"ptr\" =  ";
	std::cout << this->ptr;
	std::cout << std::endl;
	std::cout << "New object \"* ptr\" =  ";
	std::cout << * (this->ptr);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Display object metadata.
	This can be used in this example to demonstrate that member attributes and object metadata should remain consistent after the Constructor.
*/
void obj::display_metadata ()
{
	std::cout << "Display metadata member method called.";
	std::cout << std::endl;
	std::cout << "Current object located at memory address ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << "Current object \"& data\" =  ";
	std::cout << & (this->data);
	std::cout << std::endl;
	std::cout << "Current object \"data\" =  ";
	std::cout << this->data;
	std::cout << std::endl;
	std::cout << "Current object \"& ptr\" =  ";
	std::cout << & (this->ptr);
	std::cout << std::endl;
	std::cout << "Current object \"ptr\" =  ";
	std::cout << this->ptr;
	std::cout << std::endl;
	std::cout << "Current object \"* ptr\" =  ";
	std::cout << * (this->ptr);
	std::cout << std::endl;
	std::cout << std::endl;
}
