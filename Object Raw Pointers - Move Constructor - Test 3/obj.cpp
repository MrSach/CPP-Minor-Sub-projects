#include "obj.hpp"
#include <iostream>

/*
	No-Args Constructor.
*/
obj::obj()
:
	/*
		Delegated Constructor.
		Pass in single integer argument with value of 10.
	*/
	obj::obj {10}
{
	/*
		Notify the user that the No-Args Constructor has been called.
	*/
	std::cout << "No-Args Constructor called";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Constructor - single integer argument.
	The argument is read-only.
*/
obj::obj (const int & par1)
:
	/*
		Initialise "var1" pointer.
		Allocate new memory for variable.
		Initialise to the value of "par1", which is the integer parameter.
	*/
	var1
	{
		new int
		{
			par1
		}
	}
{
	/*
		Notify the user that the Constructor has been called, which is for the single read-only integer parameter function.
	*/
	std::cout << "Constructor called - single read-only integer parameter.";
	std::cout << std::endl;

	/*
		Call the object method to output object data.
	*/
	this->display_attr();
}

/*
	Destructor.
*/
obj::~obj()
{
	/*
		Notify the user that the Destructor has been called.
	*/
	std::cout << "Destructor called for object at location ";
	
	/*
		Output the object's memory location in the stack.
	*/
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Remember to deallocate the raw pointer from heap memory afterwards!
	*/
	delete this->var1;
	
	/*
		Notify the user that the raw pointer member attribute has been deallocated safely.
	*/
	std::cout << "var1 deleted!";
	std::cout << std::endl;
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Copy Constructor.
*/
obj::obj (const obj & source)
:
	/*
		Initialise "var1" raw pointer.
		Allocate memory for the variable in the heap.
		Initialise to the "var1" value from the existing "obj".
	*/
	var1
	{
		new int
		{
			* source.var1
		}
	}
{
	/*
		Notify the user that the Copy Constructor has been called.
	*/
	std::cout << "Copy Constructor called";
	std::cout << std::endl;

	/*
		Call method to display object data.
	*/
	this->display_attr ();
}

/*
	Move Constructor.
*/
obj::obj (obj && source)
:
	/*
		Initialise the raw pointer to target the same memory location as the existing temporary object's variable.
	*/
	var1
	{
		source.var1
	}
{
	/*
		Notify the user that the Move Cosntructor has been called.
	*/
	std::cout << "Move Constructor called";
	std::cout << std::endl;

	/*
		Before the destructor is called, clear any target references from raw pointers in order to protect the variables.
	*/
	source.var1 = nullptr;
	
	/*
		Call member method to display verbose object data information.
	*/
	this->display_attr ();
}

/*
	Display object data.
*/
void obj::display_attr ()
{
	/*
		Output reference for current object.
	*/
	std::cout << "Object this = ";
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Source memory address for the raw pointer.
	*/
	std::cout << "& var1 = ";
	std::cout << & (this->var1);
	std::cout << std::endl;
	
	/*
		Target memory address for the raw pointer.
	*/
	std::cout << "var1 = ";
	std::cout << this->var1;
	std::cout << std::endl;
	
	/*
		Dereferenced value for the variable targeted by the pointer.
	*/
	std::cout << "* var1 = ";
	std::cout << * (this->var1);
	std::cout << std::endl;
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
}
