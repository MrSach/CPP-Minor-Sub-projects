#include <iostream>

#include "B.hpp"

/*
	Constructor - No Arguments
*/
B :: B ()
{
	std::cout << "Constructor called - B";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Destructor
*/
B :: ~ B ()
{
	std::cout << "Destructor called - B";
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Get previous A.
*/
A * B :: get_previous_a () const
{
	std::shared_ptr < A > temp_ptr { this -> a };
	return temp_ptr . get ();
}

/*
	Output memory location for the current "B" object.
	Output memory location for the smart pointer to the previous "A" object.
*/
void B :: output_previous_a ()
{
	std::cout << "B object location = ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << "B's \"a\" object location = ";
	std::cout << this -> get_previous_a ();
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Set previous a object.
*/
void B :: set_previous_a ( std :: shared_ptr < A > & arg_a)
{
	this -> a = arg_a;
}

/*
	Get next C.
*/
C * B :: get_next_c () const
{
	return ( this -> c ) . get ();
}

/*
	Output memory location for next C.
*/
void B :: output_next_c ()
{
	std::cout << "B object location = ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << "B's \"c\" object location = ";
	std::cout << this -> get_next_c ();
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Set next c object.
*/
void B :: set_next_c ( std :: shared_ptr < C > & arg_c)
{
	this -> c = arg_c;
}


