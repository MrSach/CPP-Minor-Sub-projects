/*
	Header file for obj object.
	This object has multiple data types, which need to be handled differently, and during different scenarios.
	Remember that this program focuses on the Constructors and Copy Constructors.
*/

/*
	pragma and Block Guards.
*/
#pragma once
#ifndef COPY_CONSTRUCTOR_TEST_7
#define COPY_CONSTRUCTOR_TEST_7

class obj
{
private:
	/*
		Integer attribute.
	*/
	int data;
	
	/*
		Raw pointer to an integer.
	*/
	int * ptr;
	
public:
	/*
		Constructor - No-Arguments.
	*/
	obj();
	
	/*
		Destructor.
	*/
	~ obj();
	
	/*
		Constructor - 2 integer arguments.
	*/
	obj (const int num, const int num2);
	
	/*
		Copy Constructor.
	*/
	obj (const obj & source);
	
	/*
		Display information for current object instance.
	*/
	void display_metadata ();
};

#endif
