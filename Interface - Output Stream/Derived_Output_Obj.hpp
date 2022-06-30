/*
	Block Guards.
*/
#pragma once
#ifndef DERIVED_OUTPUT_OBJ_HPP
#define DERIVED_OUTPUT_OBJ_HPP

#include "I_Output_Me.hpp"

class Derived_Output_Obj
:
	/*
		Derive from I_Output_Me.
		Public-level inheritance.
	*/
	public I_Output_Me
{
public:
	/*
		Constructor.
	*/
	Derived_Output_Obj ();
	
	/*
		Destructor.
	*/
	virtual ~ Derived_Output_Obj ();
	
	/*
		Output function - derive from I_Output_Me and override.
	*/
	virtual void output (std::ostream & os) const override;
};

#endif // DERIVED_OUTPUT_OBJ_HPP
