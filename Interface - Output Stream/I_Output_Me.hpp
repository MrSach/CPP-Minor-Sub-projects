/*
	Block Guards
*/
#pragma once
#ifndef I_OUTPUT_ME_HPP
#define I_OUTPUT_ME_HPP

#include <iostream>

/*
	Class declaration
*/
class I_Output_Me
{
public:
	/*
		Constructor.
	*/
	I_Output_Me ();
	
	/*
		Destructor.
		Virtual.
	*/
	virtual ~ I_Output_Me ();
	
	/*
		Programmer-defined method.
		Pure Virtual Function.
		Constant function, so should operate as read-only within the method itself.
	*/
	virtual void output (std::ostream & os) const = 0;
};

/*
	Standard function.
	Operator Overload.
	Insertion Operator.
	Lhs is an output stream i.e. std::cout.
	Rhs is a read-only I_Output_Me object.
	This allows the object, and derived objects, to use the insertion operator in order to output the object to the output stream.
*/
std::ostream & operator << (std::ostream & os, const I_Output_Me & obj);

#endif // I_OUTPUT_ME_HPP
