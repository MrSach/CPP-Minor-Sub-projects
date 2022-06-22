/*
	Pragma and Block Guards
*/
#pragma once
#ifndef OBJ_MOVE_CTOR_TEST_HPP
#define OBJ_MOVE_CTOR_TEST_HPP

class obj
{
protected:
	/*
		Member attributes
	*/
	char ch;
	int * ptr;
public:
	/*
		No-Args Constructor
	*/
	obj ();
	
	/*
		Destructor
	*/
	~ obj ();
	
	/*
		Copy Constructor
	*/
	obj (const obj & source);
	
	/*
		Move Constructor
	*/
	obj (obj && source);
	
	/*
		Constructor - Single Character Parameter
	*/
	obj (char var1);
	
	/*
		Get the memory location of the char member attribute.
		Note that unlike other data types, C characters are implicitly dereferenced.
		This means that even when attempting to reference the character variable, the value will be automatically dereferenced.
		In the case of stack-allocated memory, this often cannot be displayed properly to the output stream.
		One workaround is to typecast from char * to void * when outputting the variable reference to the output stream.
	*/
	void * get_ch_location ();
};

#endif
