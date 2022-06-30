/*
	Program
		Interface - ostream.
	
	Description
		Terminal program.
		Demonstrates the application of interfaces for C++.
		To achieve this, an abstract class is created.
		Then, concrete classes are derived from the ancestral abstract class and the pure virtual functions overridden.
		Friend priveleges are not inherited, meaning they are not maintained through derived classes.
		As a result, access to member attributes and methods needs to be well-planned in order to accommodate derived classes properly.
		This example does not designate friend access in the abstract class, but it can be optionally added if relevant.
	
	Author
		Sacha

	Date
		30.6.2022
*/

#include <iostream>

#include "I_Output_Me.hpp"
#include "Derived_Output_Obj.hpp"

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "Interfaces - ostream";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare the derived concrete classes.
		Use polymorphism to dynamically bind the different instances.
	*/
	
	I_Output_Me * obj_1
	{
		new Derived_Output_Obj {}
	};
	
	/*
		Output the different objects to the output stream, which should be able to call their specific class overrides instead.
	*/
	
	std::cout << * obj_1;
	std::cout << std::endl;
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Return status - successful program execution.
	*/
	return 0;
}

