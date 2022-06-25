#pragma once
#ifndef SMART_POINTER_TEST_3_A_HPP
#define SMART_POINTER_TEST_3_A_HPP

#include <memory>

#include "B.hpp"

/*
	Forward declaration to enable "A" to use smart pointers for "B" objects.
*/
class B;

/*
	"A" - class definition.
*/
class A
{
protected:
	/*
		Member attributes.
	*/
	std::shared_ptr < B > b;

public:
	/*
		Member methods.
	*/

	/*
		Constructor - No Arguments.
	*/
	A ();

	/*
		Destructor.
	*/
	virtual ~ A ();
	
	/*
		Get next B.
	*/
	virtual B * get_next_b () const;
	
	/*
		Output memory location for next B.
	*/
	virtual void output_next_b ();
	
	/*
		Set next B object.
	*/
	virtual void set_next_b ( std::shared_ptr < B > & arg_b );
};

#endif // SMART_POINTER_TEST_3_A_HPP
