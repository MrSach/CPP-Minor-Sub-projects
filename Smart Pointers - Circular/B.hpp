#pragma once
#ifndef SMART_POINTER_TEST_3_B_HPP
#define SMART_POINTER_TEST_3_B_HPP

#include <memory>

#include "A.hpp"
#include "C.hpp"

/*
	Forward declarations - be able to use smart pointers for the other classes.
*/
class A;
class C;

class B
{
protected:
	std :: weak_ptr < A > a;
	std :: shared_ptr < C > c;
public:
	/*
		Constructor - No Arguments.
	*/
	B ();

	/*
		Destructor
	*/
	virtual ~ B ();

	/*
		Get previous A.
	*/
	virtual A * get_previous_a () const;
	
	/*
		Output memory location for the previous A.
	*/
	virtual void output_previous_a ();
	
	/*
		Set the previous A object.
	*/
	virtual void set_previous_a ( std :: shared_ptr < A > & arg_a );
	
	/*
		Get next C.
	*/
	virtual C * get_next_c () const;
	
	/*
		Output memory location for the next C.
	*/
	virtual void output_next_c ();
	
	/*
		Set the next C object.
	*/
	virtual void set_next_c ( std :: shared_ptr < C > & arg_c );
	
};

#endif // SMART_POINTER_TEST_3_B_HPP
