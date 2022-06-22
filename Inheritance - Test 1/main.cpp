/*

	Program
		Inheritance in C++ - Test 1
	
	Description
		Tests various inheritance mechanisms in C++:
			
		The main program is self-contained, apart from the C++ STD iostream libraries, and the objects are not separated into their own header or source files.
	
	Author
		Sacha

	Date
		7.1.2022

*/

#include <iostream>

/*
	Base class, named "base" for simplicity.
	This class has a member attribute called "number", which is an integer.
*/
class base
{
protected:
	/*
		Member attribute.
	*/
	int number;
public:
	/*
		No-Args Constructor.
	*/
	base ();
	
	/*
		Constructor - single integer argument.
	*/
	base (const int lhs);
	
	/*
		Copy Constructor.
	*/
	base (const base & lhs);
	
	/*
		Destructor.
	*/
	~base ();
	
	/*
		Copy assignment operator
	*/
	base & operator = (const base & rhs);
	
	/*
		Another useful function to get data for "base" object instance.
	*/
	int get_number () const;
};

/*
	No-args constructor for "base".
	Initialises own member attribute "number" to 0.
*/
base::base ()
:
	number {0}
{
	/*
		Notify user that Constructor for base object has been called.
	*/
	std::cout << "Base Constructor.";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Constructor - single integer argument for "base" object.
	This one initialises "number" to the value provided in the integer parameter.
*/
base::base (const int lhs)
:
	number {lhs}
{
	/*
		Notify user that the Constructor (single integer argument) has been called for "base".
	*/
	std::cout << "Base Constructor - single integer argument.";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Copy Cosntructor for "base".
	This function, as expected, takes a parameter, which is of object type "base".
	Through Object Slicing, derived objects can also be copied, but only for "base" attributes/methods.
*/
base::base (const base & lhs)
:
	/*
		Copy existing "base"'s "number" to the number of the new "base".
	*/
	number {lhs.number}
{
	/*
		Notify user that the Copy Constructor for "base" has been called.
	*/
	std::cout << "Base Copy Constructor.";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Destructor for "base".
*/
base::~base ()
{
	std::cout << "Base Destructor.";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Copy Assignment operator for "base".
	Takes another "base" object and performs copy assignment.
*/
base & base::operator = (const base & rhs)
{
	/*
		Notify user of "base" Copy Assignment function being called.
	*/
	std::cout << "Base Copy Assignment.";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Check for self-assignment, make no changes if so.
	*/
	if (this == & rhs)
	{
		return * this;
	}
	else
	{
		/*
			Reassing existing "number" and copy the "number" attribute from the source object to the target object.
		*/
		this->number = rhs.number;
		
		/*
			As this is a memory address being directly handled, dereference the current object being assigned to and return.
		*/
		return * this;
	}
}

/*
	The "get_number" function returns the "number" attribute for the "base" object.
*/
int base::get_number () const
{
	return this->number;
}

/*
	"derived" class, which inherits public members from "base" as public.
	It also inherits protected members as protected.
	"derived" has its own member attribute, "another_number", which is exclusive to the class "derived".
	This is to aid in learning and demonstrating the concept of inheritance in C++.
	
*/
class derived
:
	/*
		Derive "base" class at public level.
	*/
	public base
{
protected:
	/*
		Member attribute.
	*/
	int another_number;
public:
	/*
		No-args Constructor for "derived" class.
	*/
	derived ();
	
	/*
		Integer Constructor for "derived".
	*/
	derived (const int lhs);
	
	/*
		Copy Constructor for "derived", which takes an existing "derived" object.
	*/
	derived (const derived & lhs);
	
	/*
		Destructor for "derived" object.
	*/
	~derived ();
	
	/*
		Copy Assignment operator for "derived", which uses another "derived" object.
	*/
	derived & operator = (const derived & rhs);
	
	/*
		This is a function that return the "another_number" member attribute for the "derived" class.
	*/
	int get_another_number () const;
};

/*
	No-Arguments Constructor for "derived" object.
	Also calls the "base" Integer-arg Constructor with 0 as the parameter passed into the function.
*/
derived::derived ()
:
	/*
		Note that the Constructor here is not the No-Args Cosntructor, but the Single Integer Argument Constructor, which has been assigned teh value of 0.
	*/
	base {0},
	another_number {0}
{
	/*
		Notify user that the No-args Constructor for "derived" object has been called.
	*/
	std::cout << "Derived CTOR";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Single-Integer-Argument Constructor for "derived" object.
	
*/
derived::derived (const int lhs)
:
	/*
		Call the "base" integer-arg constructor using the parameter passed through by the single integer-arg constructor.
		Initialise "another_number" to the parameter's integer value, plus the value of 3.
	*/
	base {lhs},
	another_number {lhs + 3}
{
	/*
		Notify the user that the integer-argument constructor has been called for the "derived" object.
	*/
	std::cout << "Derived int arg CTOR";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Copy Constructor for the "derived" object.
	Takes an existing "derived" object instance.
*/
derived::derived (const derived & lhs)
:
	/*
		Call the Copy Constructor for the "base" part of the "derived" object to create.
		Using object slicing, the "derived" object can be processed as a "base" for copying the "base" member attributes to the new "base" part of the "derived"object.
		Confusing as it may be, all this is is "base" to "base" copying.
		Afterwards, the "another_number" attribute of the new "derived" object, which is a "derived" member, is then initialised to the value of the "another_number" attribute of the source "derived" object.
		So, this is the "derived" to "derived" part.
	*/
	
	/*
		base to base - Copy Constructor.
	*/
	base {lhs},
	
	/*
		derived to derived attribute initialisation.
	*/
	another_number {lhs.another_number}
{
	/*
		Notify user of the Copy Constructor being called for the "derived" object.
	*/
	std::cout << "Derived Copy CTOR";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Copy Assignment Operator for the "derived" object type.
*/
derived & derived::operator = (const derived & rhs)
{
	/*
		Notify the user that the "derived" Copy Assignment method has been called.
	*/
	std::cout << "Derived Copy Assignment";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Check for self-assignment, exit the function now if so.
	*/
	if (this == & rhs)
	{
		return * this;
	}
	else
	{
		/*
			Call the "base" Copy Assignment method.
			The source object is actually a "derived", but the "base" part is extracted through Object Slicing.
			In turn, the source member attribute values can now be assigned to the target object.
		*/
		this->base::operator = (rhs);
		
		/*
			Also assign the "derived" attribute "another_number" using the source object's value
		*/
		this->another_number = rhs.another_number;
		
		/*
			Return the current object.
		*/
		return * this;
	}
}

/*
	Destructor for the "derived" method.
*/
derived::~derived ()
{
	std::cout << "Derived DTOR";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Public member function, which accesses the protected member attribute "another_number".
	This is exlcusive to the "derived" class.
*/
int derived::get_another_number () const
{
	return this->another_number;
}

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Inheritance - test 1";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Create an instance of object "base", and name it "a".
		The No-Args Constructor for "base" is called as there are no arguments provided to the Constructor.
	*/
	base a;
	std::cout << "a has number of ";
	
	/*
		Display the "number" attribute for "base" "a".
		This should be zero.
	*/
	std::cout << a.get_number ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare another instance of "base", and name it "b".
		Call the single integer-argument Cosntructor, which takes the value of 10 in this instance.
	*/
	base b {10};
	std::cout << "b has number of ";
	
	/*
		Call the method to get "b"'s "number" attribute.
		This should be the value that was initialised when the Single-Integer-Argument Constructor was called, which is 10 in this case. 
	*/
	std::cout << b.get_number ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Create a "derived" instance and name it "c".
		The No-Args Constructor for "derived" is called here.
		As no arguments are provided the default values of zero are initialised to both the "number" attribute and the "another_number" attribute.
		Note that although the No-Args Constructor for "derived" was called, the Single_integer-Argument for the "base" part is called with the value of 0 passed into it.
	*/
	derived c;
	std::cout << "c has number of ";
	
	/*
		Call the method to get the "number" attribute, which comes from the "base" class in this case.
		As "c" was initialised with the default values, it should display 0 here.
	*/
	std::cout << c.get_number ();
	std::cout << std::endl;
	std::cout << "c has another_number of ";
	
	/*
		Call the method to get the "another_number" attribute, which comes from the "derived" class.
		Because "c" was created with no arguments, there should be a value of 0 as the default No-Args Constructor was defined with initialisation set to 0 for all member attributes.
	*/
	std::cout << c.get_another_number ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Create a "derived" object and name it "d".
		Initialise to the integer value of "20".
		As a result, the Single-Integer-Argument Constructor for the "derived" class is called with the value of 20 passed into it.
		This should initialise "number" to 20 and "another_number" to 23.
	*/
	derived d {20};
	std::cout << "d has number of ";
	
	/*
		Calls the "base" class' public method "get_number" in order to get the protected member attribute "number".
		This should display 20 in this case.
	*/
	std::cout << d.get_number ();
	std::cout << std::endl;
	std::cout << "d has another_number of ";
	
	/*
		Calls the "derived" class' public method "get_another_number" in order to get the protected member attribute "another_number".
		The number displayed should be 23.
	*/
	std::cout << d.get_another_number ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Copy Constructor for "base" class.
		Name new object as "e" and copy from "base" "b".
		So copy attributes of "b" to "e".
		As "b"'s member attribute "number" is 10, "e" should also have a value of 10 for "number".
	*/
	base e {b};
	std::cout << "e has number of ";
	std::cout << e.get_number ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		"derived" Copy Constructor called.
		Name new object "f".
		Initialise with the "derived" object instance "d".
		This should call the Copy Constructor for both the "base" and "derived" parts.
		All the member attributes should be copied from "d" to "f".
	*/
	derived f {d};
	std::cout << "f has number of ";
	
	/*
		Should be 20.
	*/
	std::cout << f.get_number ();
	std::cout << std::endl;
	std::cout << "f has another_number of ";
	
	/*
		Should be 23.
	*/
	std::cout << f.get_another_number ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Now create a "base" and name it "g", and initialise "number" to 15.
	*/
	base g {15};
	
	/*
		Create another "base", called "h".
	*/
	base h;
	
	/*
		Call the Copy Assignment Operator for "h", using "g" as the source object to copy from.
		So "h" should get the same attribute values as "g".
	*/
	h = g;
	std::cout << "h has number of ";
	
	/*
		Should be 15.
	*/
	std::cout << h.get_number ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Create a new "derived" object, name it "i", use the Single-Integer-Argument and pass 45 into the function.
		As a result, the member attribute "number" should be 45, while "another_number" should be 48.
	*/
	derived i {45};
	
	/*
		Create a "derived" called "j" using the No-Args Constructor.
	*/
	derived j;
	
	/*
		Use the "derived" Copy Assignment Operator.
		Copy "i" to "j" as per the programmer-defined functions.
	*/
	j = i;
	std::cout << "j has number of ";
	
	/*
		Should be 45.
	*/
	std::cout << j.get_number ();
	std::cout << std::endl;
	std::cout << "j has another_number of ";
	
	/*
		Should be 48.
	*/
	std::cout << j.get_another_number ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
