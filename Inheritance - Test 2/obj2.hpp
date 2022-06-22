/*
	Pragma
*/
#pragma once

/*
	Block Guard
*/
#ifndef OBJ2_HEADER_HPP
#define OBJ2_HEADER_HPP

#include "obj1.hpp"

/*
	obj2 object.
	Inherit obj1 attributes and methods at public level.
*/
class obj2 : public obj1
{
protected:
	/*
		obj2's own unique "number2" attribute.
	*/
	int number2;
public:
	/*
		obj2 No-Args Constructor.
	*/
	obj2 ();
	
	/*
		obj2 Constructor - single integer argument.
	*/
	obj2 (const int & rhs);
	
	/*
		obj2 Copy Constructor.
	*/
	obj2 (const obj2 & rhs);
	
	/*
		obj2 Move Constructor.
	*/
	obj2 (obj2 && rhs);
	
	/*
		obj2 Copy Assignment.
	*/
	obj2 & operator = (const obj2 & rhs);
	
	/*
		obj2 Move Assignment.
	*/
	obj2 & operator = (obj2 && rhs);
	
	/*
		obj2 Destructor.
	*/
	~obj2 ();
	
	/*
		obj2 get_number2 method, which behaves much like obj1's get_number method, but to get the obj2 "number2" attribute instead.
	*/
	const int get_number2 () const;
	
	/*
		obj2 show_number2 object method.
		Again, this is the obj2 variant that behaves much like obj1's show_number2 method.
	*/
	void show_number2 () const;
	
	/*
		An override for the obj1::get_obj1 is used here.
		Regardless, it will return the pointer to the current object.
		A method to get the pointer to the obj2 object is also provided, and should give the same memory location, for obj2 'IS A' obj1.
	*/
	obj1 * get_obj1 ();
	obj2 * get_obj2 ();
};

#endif
