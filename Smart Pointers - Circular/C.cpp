#include <iostream>

#include "C.hpp"

/*
	Constructor - No Arguments
*/
C :: C ()
{
	std::cout << "Constructor called - C";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Destructor
*/
C :: ~ C ()
{
	std::cout << "Destructor called - C";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Get previous B.
*/
B * C :: get_previous_b () const
{
	std::shared_ptr < B > temp_ptr { this -> b };
	return temp_ptr . get ();
}

/*
	Output memory location for previous B.
*/
void C :: output_previous_b ()
{
	std::cout << "C object location = ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << "C's \"b\" object location = ";
	std::cout << this -> get_previous_b ();
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Set previous B object.
*/
void C :: set_previous_b ( std :: shared_ptr < B > & arg_b)
{
	this -> b = arg_b;
}


