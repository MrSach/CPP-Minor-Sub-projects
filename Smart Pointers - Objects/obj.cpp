#include <iostream>

#include "obj.hpp"

/*
	Constructor - No Arguments
*/
obj::obj ()
:
	/*
		Delegate to Constructor - single string argument.
	*/
	obj
	{
		""
	}
{
	std::cout << "Constructor - No Arguments, called";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Constructor - single string argument
*/
obj::obj (const std::string & arg_name)
:
	/*
		Initialise member attribute "obj_name" to the value given by "arg_name".
	*/
	obj_name
	{
		arg_name
	}
{
	std::cout << "Constructor - Single String Argument, called";
	std::cout << std::endl;
	std::cout << "Created object obj at location ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Destructor
*/
obj:: ~ obj ()
{
	std::cout << "Destructor called";
	std::cout << std::endl;
	std::cout << "Deleting object at location ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Get the member attribute "obj_name".
*/
std::string obj :: get_obj_name () const
{
	return this -> obj_name;
}

/*
	Output the member attribute "obj_name" to the output stream.
*/
void obj :: output_obj_name ()
{
	/*
		Get the object's name.
	*/
	std::cout << "obj ";
	std::cout << this;
	std::cout << " name = ";
	std::cout << "\"";
	std::cout << this -> get_obj_name ();
	std::cout << "\"";
	std::cout << std::endl;
	std::cout << std::endl;
}
