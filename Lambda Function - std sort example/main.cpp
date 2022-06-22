/*

	Program
		Lambda Functions - std::sort Example
	
	Description
		Terminal program.
		Demonstrates the use of the STL Algortihm std::sort, which loops through the STL Container and sorts the elements of the Container, based on programmer-defined criteria.
		A std::vector is declared and initialised with unordered values.
		After the std::sort, the vector elements are sorted by value.
	
	Author
		Sacha

	Date
		7.2.2022

*/

#include <iostream>
#include <algorithm>
#include <vector>

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks
	*/
	std::cout << "Lambda Functions - std::sort Example";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare and initialise vector with different, unordered values, but values that can be sorted.
	*/
	std::vector <double> v1 {20.4, 11.8, 55.0, 4.3, 15.2};
	
	/*
		STL Algorithm function, std::sort.
		This takes in the STL Iterator to the first element in the STL Container, the last, and then a lambda function is defined inline.
	*/
	std::sort (begin (v1), end (v1),
	/*
		Empty capture list.
		Stateless.
	*/
	[]
	
	/*
		Take the two elements and compare them against each other.
	*/
	(double x, double y)
	{
		return x < y;
	}
	);
	
	/*
		After the Container object has been sorted, check that the sort has worked.
		Loop through Container object and output each element from it in the current order.
	*/
	std::for_each (v1.begin (), v1.end (),
	[]
	(double x)
	{
		std::cout << x << " ";
	}
	);
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
