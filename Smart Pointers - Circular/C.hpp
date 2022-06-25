#pragma once
#ifndef SMART_POINTER_TEST_3_C_HPP
#define SMART_POINTER_TEST_3_C_HPP

#include <memory>

#include "B.hpp"

/*
	Forward declaration - to be able to use "B" smart pointers in a "C" class.
*/
class B;

class C
{
protected:
	std :: weak_ptr < B > b;
public:
	/*
		Constructor - No Arguments
	*/
	C ();
	
	/*
		Destructor
	*/
	virtual ~ C ();
	
	/*
		Get previous B.
	*/
	virtual B * get_previous_b () const;
	
	/*
		Output previous B.
	*/
	virtual void output_previous_b ();
	
	/*
		Set previous B.
	*/
	virtual void set_previous_b ( std :: shared_ptr < B > & arg_b );

};

#endif // SMART_POINTER_TEST_3_C_HPP
