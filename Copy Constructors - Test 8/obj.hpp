/*
	"obj" object.
	This object is a test object, which has been used to test the basics of the C++ object oriented copy constructor.
	Because the focus is on the Copy Constructor, most OOP concepts have been ignored in this example.
*/

/*
	pragma and Block Guards.
*/
#pragma once
#ifndef COPY_CTOR_TEST_8
#define COPY_CTOR_TEST_8

class obj
{
protected:
	/*
		Test with a standard member attribute variable.
	*/
	int var_int;
	
	/*
		Test with a pointer member attribute variable.
	*/
	int * var_ptr;
	
public:
	/*
		No-args constructor.
	*/
	obj ();
	
	/*
		Destructor.
	*/
	~ obj ();
	
	/*
		Copy Constructor.
	*/
	obj (const obj & source);
	
	/*
		Member method to display the instance's data.
	*/
	void display_data ();
};

#endif
