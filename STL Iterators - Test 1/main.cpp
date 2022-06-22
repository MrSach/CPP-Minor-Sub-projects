/*

	Program
		Iterators in C++ - Test 1
	
	Description
		Terminal program.
		This program explores the C++ STL Iterator.
		An example is provided where an STL Container object is declared and instantiated with multiple example values.
		Using the STL Container's begin () method, an STL Iterator is returned and this is used to initialise the value of the new STL Iterator object that is later declared during the main loop.
		Cycling through the STL Container is simple - use the STL Container's begin function to get the Iterator to the first element in the Container.
		Then, assign the condition for looping to be while the Container's end () method's Iterator has not been reached (the last item in the Container).
		After each loop, increment the Iterator.
		The example given in this program displays the current item in the Container and then a spacebar.
	
	Author
		Sacha

	Date
		30.1.2022

*/

#include <iostream>
#include <vector>
#include <iterator>

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks
	*/
	std::cout << "Iterator - test 1";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		STL Container declaration and instantiation.
		Nested curled brackets are used for compiler compatibility.
	*/
	std::vector <int> t1 { {1, 5, 9, 13, 17} };
	
	/*
		STL Iterator looping, using Iterators returned from Container methods.
	*/
	for (std::vector<int>::iterator i2 {t1.begin ()}; i2 < t1.end (); ++i2)
	{
		std::cout << * i2;
		std::cout << " ";
	}
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
