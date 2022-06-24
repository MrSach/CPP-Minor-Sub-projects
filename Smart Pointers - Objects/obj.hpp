#pragma once
#ifndef SMART_POINTER_UNIQUE_PTR_OBJ
#define SMART_POINTER_UNIQUE_PTR_OBJ

#include <string>

class obj
{
protected:
	std::string obj_name;
public:
	/*
		Constructor - No Arguments
	*/
	obj ();
	
	/*
		Constructor - single string argument
	*/
	obj (const std::string & arg_name);
	
	/*
		Destructor
	*/
	virtual ~ obj ();
	
	/*
		Get the member attribute "obj_name".
	*/
	virtual std::string get_obj_name () const;
	
	/*
		Output the member attribute "obj_name" to the output stream.
	*/
	virtual void output_obj_name ();
};

#endif // SMART_POINTER_UNIQUE_PTR_OBJ
