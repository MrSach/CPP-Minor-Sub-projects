/*
	Pragma and Block Guards
*/

#pragma once
#ifndef OBJ_3_TEST_HPP
#define OBJ_3_TEST_HPP

class obj3test
{
protected:
	/*
		Instance attribute - unique to each instance!
	*/
	unsigned long int obj_id;
	
	/*
		Class attributes - shared across entire class!
	*/
	static unsigned long int obj_count;
	static unsigned long int obj_total;
	static unsigned long int obj_deleted;
public:
	/*
		Constructor - No Arguments
	*/
	obj3test ();
	
	/*
		Destructor
	*/
	~obj3test ();
	
	/*
		Methods to retrieve instance attribute "obj_id".
	*/
	unsigned long int get_obj_id ();
	unsigned long int * get_obj_id_address ();
	
	/*
		Class method to retrieve class attributes.
	*/
	static unsigned long int get_obj_count ();
	static unsigned long int * get_obj_count_address ();
	static unsigned long int get_obj_total ();
	static unsigned long int * get_obj_total_address ();
	static unsigned long int get_obj_deleted ();
	static unsigned long int * get_obj_deleted_address ();
};

#endif
