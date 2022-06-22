/*
	"practice_test_obj"
	This object is a test object, which has been used for the purpose to practice and learn the basics of C++ object oriented programming.
	This example explores the Constructor and the Copy Constructor.
*/

#include <iostream>

#include "practice_test_obj.hpp"

/*
	No-Arguments Constructor.
	Delegate to the Constructor with an argument of the value 0 as an integer value.
*/
practice_test_obj::practice_test_obj ()
:
	/*
		Call Delegated Constructor, pass in 0 as integer argument.
	*/
	practice_test_obj {0}
{
	
}

/*
	DTOR
*/
practice_test_obj::~practice_test_obj ()
{
	
}

/*
	Constructor - this one has an input of an integer value, which is passed when a programmer-defined value is given, otherwise the no-args Constructor will call this function and pass 0 by default.
	As this is a constructor that is not a copy constructor, this function will not use an existing object to create a new object instance of practice_test_obj.
	It will simply create a new object and assign test_int_1 to whatever value was passed into it as arg_a.
	The memory address is given as the this pointer, meaning that that memory location will hold the memory address of the new object.
*/
practice_test_obj::practice_test_obj (int arg_a)
:
	/*
		Initialise "test_int_1" to the parameter's value.
	*/
	test_int_1 {arg_a}
{
	/*
		Notify the user that the Constructor has been called with a single integer argument.
	*/
	std::cout << "Constructor called - single integer argument.";
	std::cout << std::endl;
	
	/*
		Output value of the "arg_a" value.
	*/
	std::cout << "\"arg_a\" = ";
	std::cout << arg_a;
	std::cout << std::endl;
	
	/*
		Output value of "test_int_1".
	*/
	std::cout << "\"test_int_1\" = ";
	std::cout << test_int_1;
	std::cout << std::endl;	
	
	/*
		Output the object reference.
	*/
	std::cout << "New object reference = ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Copy Constructor
	This uses an existing practice_test_obj and uses this in order to generate a new practice_test_obj instance.
	Much like the int arg constructor as before, this function initialises the new object's test_int_1 value to the same value as the source_obj source object's test_int_1.
	As the copy constructor is called, this will be output to the terminal and the user will be notified.
	Next, the value copied is given, while a new memory address is also displayed to the terminal using the same method as in the single integer-argument constructor.
*/
practice_test_obj::practice_test_obj (const practice_test_obj & source_obj)
:
	/*
		Initialise "test_int_1" to the value using the existing object's value.
	*/
	test_int_1 {source_obj.test_int_1}
{
	/*
		Notify the user that the Copy Constructor has been called.
	*/
	std::cout << "Copy Constructor called.";
	std::cout << std::endl;
	
	/*
		Output source object metadata.
	*/
	std::cout << "Existing object reference = ";
	std::cout << & source_obj;
	std::cout << std::endl;
	
	std::cout << "Existing object \"& test_int_1\" = ";
	std::cout << & source_obj.test_int_1;
	std::cout << std::endl;
	
	std::cout << "Existing object \"test_int_1\" = ";
	std::cout << source_obj.test_int_1;
	std::cout << std::endl;
	
	/*
		Output new object information.
	*/
	std::cout << "New object reference = ";
	std::cout << this;
	std::cout << std::endl;
	
	std::cout << "New object \"& test_int_1\" = ";
	std::cout << & this->test_int_1;
	std::cout << std::endl;
	
	std::cout << "New object \"test_int_1\" = ";
	std::cout << this->test_int_1;
	std::cout << std::endl;
	std::cout << std::endl;
}
