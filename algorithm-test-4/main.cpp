#include <iostream>
#include <vector>
#include <algorithm>

/*

	Program
		C++ STL Algorithm Test - Basic - Test 4 - Test with std::for_each
	
	Description
		Another example of handling C++ STL Containers, STL Iterators and STL Algorithms.
		Again, the std::for_each algorithm function is used, but this time as part of variable initialisation.
		As can be observed the STL Algorithms are very powerful!
	
	Author
		Sacha

	Date
		30.1.2022

*/

//Main function
int main (int argc, char * * argv)
{
	//Title with line breaks
	std::cout << "alg test 4";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		STL Container declared as type std::vector.
		This container instance is declared to contain type int and is named v1.
		This is then initialised with a few dummy integer values.
	*/
	std::vector <int> v1 {77, 2, 11, 5};
	
	/*
		Another variable, v2, is declared and initialised to the result of a call to the STL Algorithm std::for_each, where v1 is passed and an inline lambda function is defined.
		Note the "c" in the begin and end Iterators - this is to protect the data in the original STL Container and the values in that container.
		In this example the elements in v1 are processed as read-only.
	*/
	auto v2
	{
		std::for_each
		(
			v1.cbegin (),
			v1.cend (),
			
			//Inline lambda function
			//Stateless, so empty environment capture list
			[]
			
			//Pass the element in the STL Container that is currently pointed to by the STL Iterator
			(int x)
			
			//Code to execute
			{
				//Output x, followed by a spacebar
				std::cout << x;
				std::cout << " ";
			}
		)
	};
	
	//End with line breaks
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
