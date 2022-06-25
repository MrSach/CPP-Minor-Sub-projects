#include <iostream>

#include "A.hpp"

/*
	Constructor - No Arguments
*/
A :: A ()
{
	std::cout << "Constructor called - A";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Destructor
*/
A :: ~ A ()
{
	std::cout << "Destructor called - A";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Get next B.
*/
B * A :: get_next_b () const
{
	return ( this -> b ) . get ();
}

/*
	Output memory location for next B.
*/
void A :: output_next_b ()
{
	std::cout << "A object location = ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << "A's \"b\" object location = ";
	std::cout << this -> get_next_b ();
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Set next B object.
*/
void A :: set_next_b ( std :: shared_ptr < B > & arg_b)
{
	this -> b = arg_b;
}


