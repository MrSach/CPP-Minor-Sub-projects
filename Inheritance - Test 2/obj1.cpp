#include "obj1.hpp"
#include <iostream>

/*
	No-Args Constructor.
*/
obj1::obj1 ()
:
	/*
		Initialise default value for "number" member attribute as 0.
	*/
	number {0}
{
	/*
		Notify user that obj1 Constructor has been called.
	*/
	std::cout << "obj1 Constructor - No-Arguments";
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj1 Constructor - single integer argument.
	Keep constant in order to prevent parameter value from being changed in error.
*/
obj1::obj1 (const int & rhs)
:
	/*
		Initialise member attribute "number" to the parameter's value.
	*/
	number {rhs}
{
	/*
		Notify user that obj1 Constructor for single integer argument has been called.
	*/
	std::cout << "obj1 const int arg CTOR";
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj1 Copy Constructor
*/
obj1::obj1 (const obj1 & rhs)
:
	/*
		Initialise new object's "number" to the value from the source object's "number".
	*/
	number {rhs.number}
{
	/*
		Notify user that the obj1 Copy Constructor has been called.
	*/
	std::cout << "obj1 Copy CTOR";
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj1 Move Constructor
*/
obj1::obj1 (obj1 && rhs)
:
	/*
		Initialise new object's "number" attribute to the value using the existing object's "number" attribute value.
	*/
	number{rhs.number}
{
	/*
		Notify the user that the obj1 Move Constructor has been called.
	*/
	std::cout << "obj1 Move CTOR";
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj1 Copy Assignment
*/
obj1 & obj1::operator = (const obj1 & rhs)
{
	/*
		Notify user that the obj1 Copy Assignment has been called.
	*/
	std::cout << "obj1 Copy Assignment";
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Check for self-assignment and exit early if so.
	*/
	if (this == & rhs)
	{
		/*
			Return current object as is without changes.
		*/
		return * this;
	}
	
	/*
		For everything else.
	*/
	else
	{
		/*
			Reassign the value for the target object's "number" to the value for the "number" of the source object.
		*/
		this->number = rhs.number;
		
		/*
			Return target object after changes have been applied.
		*/
		return * this;
	}
}

/*
	obj1 Move Assignment
*/
obj1 & obj1::operator = (obj1 && rhs)
{
	/*
		Notify user that the obj1 Move Assignment method has been called.
	*/
	std::cout << "obj1 Move Assignment";
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Check for self-assignment, exit early and return the target object early if so.
	*/
	if (this == & rhs)
	{
		return * this;
	}
	
	/*
		For everything else...
	*/
	else
	{
		/*
			Assign the value of the source object's "number" to the value of the target object's "number".
		*/
		this->number = rhs.number;
		
		/*
			Return the target object with changes applied.
		*/
		return * this;
	}
}

/*
	obj1 Destructor
*/
obj1::~obj1 ()
{
	/*
		Notify user that the obj1 destructor has been called.
		As there are no raw pointers to handle, there is no need to deallocate dyamically-allocated memory here.
	*/
	std::cout << "obj1 Destructor";
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj1 get_number method.
	Gets the value of the object's "number" attribute. 
*/
const int obj1::get_number () const
{
	return this->number;
}

/*
	obj1 show_number method.
	Outputs the value of member attribute "number".
*/
void obj1::show_number () const
{
	std::cout << "obj1 ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << "Number = ";
	std::cout << this->get_number();
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj1 method to get the pointer to the current object.
	Returns a memory reference.
*/
obj1 * obj1::get_obj1 ()
{
	return this;
}
