#include <iostream>
#include <vector>

/*

	Program
		C++ - STL Containers - Vector - arrays example
	
	Description
		This program defines a standard vector, allocates 100 entries and initialises all 100 elements to the value of 5.2.
		It then loops through all the elements in the vector and outputs the value of each element on a separate line.
		A simple measure of calling a function to get the vector's current size helps to reduce the risk of the 'out of bounds' error.
	
	Author
		Sacha

	Date
		27.11.2021

*/

//Main
int main (int argc, char * * argv)
{
	//Title and link break
	std::cout << "Array-10";
	std::cout << std::endl;
	
	/*
		Declare vector with container type double
		Name as arr, initialise with 100 values, all at 5.2]
	*/
	std::vector <double> arr (100, 5.2);
	
	/*
		Loop through the STL Container manually.
		Declare and initialise a new variable to 0.
		Name this new variable iterator.
		In order to avoid reaching beyond the data boundaries, the variable index must not exceed the number of elements in the container.
		
	*/
	for (unsigned long int iterator {0}; iterator < arr.size(); ++iterator)
	{
		std::cout << arr [iterator];
		std::cout << std::endl;
	}
	
	//End with line breaks
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
