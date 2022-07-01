/*
	Block Guards.
*/
#pragma once
#ifndef STATEFUL_OBJ_HPP
#define STATEFUL_OBJ_HPP

#include <vector>

class Stateful_Obj
{
/*
	Member attributes.
*/
protected:
	/*
		STL Container - can be processed by an STL Algorithm and Lambda Functions.
	*/
	std::vector <int> numbers;
	
public:
	/*
		Constructor.
		Read in a std::vector of type int.
		Read-only parameter to avoid data corruption.
	*/
	Stateful_Obj (const std::vector <int> & v);
	
	/*
		Destructor.
		Virtual.
	*/
	virtual ~ Stateful_Obj ();
	
	/*
		Display numbers.
		Return void.
		Virtual.
		Read-only for the purpose of data output.
	*/
	virtual void display_numbers () const;
	
	/*
		Method to sort and filter existing member attribute "numbers", which is the STL Container.
		The new list is then returned by the method.
	*/
	virtual std::vector <int> uniques ();
};

#endif // STATEFUL_OBJ_HPP
