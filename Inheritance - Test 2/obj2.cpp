#include "obj2.hpp"
#include <iostream>

/*
	obj2 No-Args Constructor
*/
obj2::obj2 ()
:
	/*
		Call obj1 base Constructor and pass 0 as a single integer value.
		Also initialise member attribute "number2" as 0.
	*/
	obj1 {0},
	number2 {0}
{
	/*
		Notify the user that obj2 No-Arguments Constructor has been called.
	*/
	std::cout << "obj2 Constructor - No-Arguments.";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj2 Constructor - single integer argument
*/
obj2::obj2 (const int & rhs)
:
	/*
		Call base obj1 Constructor and pass single integer argument that is the value passed into the Constructor for obj2.
		Also initialise obj2 member attribute "number2" and initialise to the same value as the value passed into the Constructor.
	*/
	obj1 {rhs},
	number2 {rhs}
{
	/*
		Notify the user that the Constructor for obj2 has been called and a single integer value has been passed into it.
	*/
	std::cout << "obj2 Constructor - Single Integer Argument.";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj2 Copy Constructor
*/
obj2::obj2 (const obj2 & rhs)
:
	/*
		Call base obj1 Copy Constructor and pass in obj2 as an argument.
		Using Object Slicing, the obj1 member attributes in obj2 can be handled through the obj1 methods.
		Also initialise the obj2 member attribute "number2" to the same value as the source object.
	*/
	obj1 {rhs},
	number2 {rhs.number2}
{
	/*
		Notify the user that the obj2 Copy Constructor has been called.
	*/
	std::cout << "obj2 Copy Constructor";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj2 Move Constructor
*/
obj2::obj2 (obj2 && rhs)
:
	/*
		Call the obj1 Move Constructor and pass in the source obj2.
		Using Object Slicing, the obj2 object, being a derived class of obj1, can be handled as an obj1.
		Also initialise member attribute "number2" to the source object's "number2" value.
	*/
	obj1 {rhs},
	number2 {rhs.number2}
{
	/*
		Notify the user that the obj2 Move Constructor method has been called.
		Note that because no raw pointers are used here, there is no need to move pointers from source to target objects.
	*/
	std::cout << "obj2 Move Constructor.";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj2 Copy Assignment
*/
obj2 & obj2::operator = (const obj2 & rhs)
{
	/*
		Notify the user that the obj2 Copy Assignment has been called.
	*/
	std::cout << "obj2 Copy Assignment";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Check for self-assignment, exist the method early if so.
	*/
	if (this == & rhs)
	{
		return * this;
	}
	
	/*
		For everything else, reassign obj1 member attributes through the obj1 copy assignment.
		Object Slicing is used to pass the obj2 object in and for it to be treated as an obj1 object.
		The member attributes of obj2 are also reassigned to the values from the member attributes of the source obj2 object.
		When reassignment has completed, return the object with changes.
	*/
	this->obj1::operator = (rhs);
	this->number2 = rhs.number2;
	return * this;
}

/*
	obj2 Move Assignment
*/
obj2 & obj2::operator = (obj2 && rhs)
{
	/*
		Notify the user that the obj2 Move Assignment has been called.
	*/
	std::cout << "obj2 Move Assignment";
	std::cout << std::endl;
	std::cout << std::endl;

	/*
		Check for self-assignment, exit early if so.
	*/
	if (this == & rhs)
	{
		return * this;
	}
	
	/*
		Call Move Constructor for obj1 and pass in the source obj2 object.
		Also directly take values for obj2 member attributes for the source object and assign to the target.
		Again, because there are no raw pointers there is no need to move pointers from source to target.
		Finally, return the object with changes when done.
	*/
	this->obj1::operator = (rhs);
	this->number2 = rhs.number2;
	return * this;
}

/*
	obj2 Destructor
*/
obj2::~obj2 ()
{
	/*
		Notify the user that the obj2 Destructor has been called.
	*/
	std::cout << "obj2 Destructor";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj2 - get_number2 method.
*/
const int obj2::get_number2 () const
{
	/*
		Get the member attribute, "number2".
	*/
	return this->number2;
}

/*
	obj2 - show_number2 method.
	This enables output to the terminal console.
*/
void obj2::show_number2 () const
{
	/*
		Show the obj2 object memory address location.
		Also display the object's member attribute "number2".
	*/
	std::cout << "obj2 ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << "Number2 = ";
	std::cout << this->get_number2 ();
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	obj2's get_obj2 method, which returns the pointer to the current object in memory.
*/
obj2 * obj2::get_obj2 ()
{
	return this;
}

/*
	obj2's override for the get_obj1 method.
	Although not formally declared with the 'override' keyword, the method should give the same output as the obj2 method above.
*/
obj1 * obj2::get_obj1 ()
{
	return this;
}


