/*

	Program
		Multiple Inheritance - Test 1

	Description
		Demonstrates Multiple Inheritance in C++.

	Author
		Sacha

	Date
		10.2.2022, revised 5.6.2022.

*/

#include <iostream>

/*
	Class "A", the base object.
*/
class A
{
protected:
	/*
		"A"'s "x" variable.
	*/
	int x;
public:
	/*
		No-Arguments Constructor
	*/
	A ()
	:
		/*
			Initialise "x" to 0.
		*/
		x {0}
	{
		
	}
	
	/*
		Destructor.
		No raw pointers so no heap memory to deallocate.
	*/
	virtual ~ A ()
	{
		
	}
	
	/*
		Get "x" for "A" object.
	*/
	virtual int get_x () const
	{
		return this->x;
	}
};

/*
	Class "B", which is derived from "A".
	Use public-tier inheritance, so inherit public - public and protected - protected.
	The virtual keyword in this case consolidates common ancestral classes together in order to avoid duplicating "A" objects for further derived objects.
*/
class B : virtual public A
{
public:
	/*
		Constructor for "B".
	*/
	B ()
	{
		
	}
	
	/*
		Destructor for "B".
	*/
	virtual ~ B ()
	{
		
	}
};

/*
	Class "C".
	This is derived from class "A".
	Public inheritance is used so public and protected access modifiers are preserved in the derived class.
	Use virtual inheritance in order to allow "C" to consolidate "A" classes together for derived classes.
*/
class C : virtual public A
{
public:
	/*
		Constructor for "C".
	*/
	C ()
	{
		
	}
	
	/*
		Destructor for "C".
	*/
	virtual ~ C ()
	{
		
	}
};

/*
	Class "D".
	Inherit from "B".
	Also inherit from "C".
	Do not directly inherit from "A".
	Use public inheritance for both immediate ancestral classes.
	"virtual" keyword enables objects from class "D" to directly be able to use "D::get_x ()" instead of relying on "D::B::A::get_x ()" or "D::C::A::get_x ()".
*/
class D : virtual public B, virtual public C
{
public:
	/*
		Constructor for "D".
	*/
	D ()
	{
		
	}
	
	/*
		Destructor for "D".
	*/
	virtual ~ D ()
	{
		
	}
};

/*
	Main function.
*/
int main (int argc, char ** argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Multiple inheritance - test 1";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare "D" instance.
		Name this "obj1".
		Use the No-Arguments Constructor.
	*/
	D obj1;
	
	/*
		Because of the serial virtual inheritance, the object can directly access its own "A" methods.
		Without the virtual inheritance, "D" would have 2 sets of "A" objects: one for "B" and one for "C", and accessing "A" methods would require the full inheritance trail in order to avoid ambiguity!
	*/
	std::cout << obj1.get_x();
	std::cout << std::endl;
	std::cout << obj1.A::get_x();
	std::cout << std::endl;
	std::cout << obj1.B::get_x();
	std::cout << std::endl;
	std::cout << obj1.C::get_x();
	std::cout << std::endl;
	std::cout << obj1.D::get_x();
	std::cout << std::endl;
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
