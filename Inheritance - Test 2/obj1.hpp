/*
	pragma.
*/
#pragma once

/*
	Block Guards.
*/
#ifndef OBJ1_HEADER_HPP
#define OBJ1_HEADER_HPP

/*
	obj1 object.
*/
class obj1
{
protected:
	/*
		obj1's member attribute.
	*/
	int number;
public:
	/*
		No-Args Constructor.
	*/
	obj1 ();
	
	/*
		Constructor - single integer argument
	*/
	obj1 (const int & rhs);
	
	/*
		Copy Constructor
	*/
	obj1 (const obj1 & rs);
	
	/*
		Move Constructor
	*/
	obj1 (obj1 && rhs);
	
	/*
		Copy Assignment
	*/
	obj1 & operator = (const obj1 & rhs);
	
	/*
		Move Assignment
	*/
	obj1 & operator = (obj1 && rhs);

	/*
		Destructor
	*/
	~obj1 ();
	
	/*
		Get the value of member attribute "number".
	*/
	const int get_number () const;
	
	/*
		Output the value of "number" to the output stream.
	*/
	void show_number () const;
	
	/*
		Get the pointer reference to the current object.
	*/
	obj1 * get_obj1 ();
};

#endif
