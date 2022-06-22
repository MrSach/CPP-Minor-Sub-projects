/*
	Pragma and Block Guards
*/
#pragma once
#ifndef OBJ_MOVE_CONSTRUCT_TEST_3_HPP
#define OBJ_MOVE_CONSTRUCT_TEST_3_HPP

/*
	"obj" class
*/
class obj
{
protected:
	/*
		Raw pointer to integer member attribute.
	*/
	int * var1;
public:
	/*
		No-Args Constructor.
	*/
	obj ();
	
	/*
		Constructor - single integer argument, read-only
	*/
	obj (const int & par1);
	
	/*
		Destructor.
	*/
	~ obj ();
	
	/*
		Copy Constructor - single "obj" argument.
	*/
	obj (const obj & source);
	
	/*
		Move Constructor - single rvalue "obj" argument.
	*/
	obj (obj && source);
	
	/*
		Method to output verbose report of current object's data.
	*/
	void display_attr ();
};

#endif
