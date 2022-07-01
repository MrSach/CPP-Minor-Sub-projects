/*
	Program
		Stateful Lambda - Object.
	
	Description
		Terminal program.
		Demonstrates the STL Algorithms with Lambda Functions and Stateful Capture Lists.
		This allows environment variables to be read and written to from outside the STL Container that is being read or written to directly, which is especially useful in order to define predicate boolean lambda functions.
		This example explores the std::vector::erase() and the std::remove_if() processes.
	
	Author
		Sacha

	Date
		30.6.2022
*/

/*
	Utilise common libraries.
*/
#include <iostream>
#include <vector>
#include <algorithm>

/*
	Utilise local object files.
*/
#include "Stateful_Obj.hpp"

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "Stateful Lambdas - Objects.";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare original object.
		Initialise with unordered values and some duplicates.
	*/
	Stateful_Obj obj {std::vector <int> {{ 1, 5, 1, 19, 3, 5, 7, 2 }} };
	
	/*
		Display the list of entries in the original object.
		These will be displayed in the original order as passed to the Constructor.
		Duplicates will appear.
	*/
	obj.display_numbers();
	
	/*
		Create a secondary object and pass in the unique sorted list of numbers from the firsst object.
	*/
	Stateful_Obj revised {obj.uniques()};
	
	/*
		Tidy with line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Display the number list for the second object.
		This list is sorted and filtered for unique values.
	*/
	revised.display_numbers();
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Return status - successful program execution.
	*/
	return 0;
}

