#include <iostream>
#include <vector>
#include <algorithm>

/*

	Program
		C++ STL Algorithm Test - Basic - Test 3 with lambda function 
	
	Description
		This test is test 3 of the C++ STL Algorithm tests that I have covered.
		This time a std::vector has been used, which is also a C++ STL Container object.
		The data type specified for this instance of std::vector is of type character.
		Initialisation is used and the vector starts its role in the program with a few predefined entries.
		Double brackets have been used for backwards compatibility with legacy C++ compilers.
		There is plenty of commentary in this example.
		Please feel free to copy and paste the lambda function definition into a separate locations with the comments eliminated.
		This is especially true as the lambda function definition is spread across multiple lines.
	
	Author
		Sacha

	Date
		30.1.2022

*/

//Main function
int main (int argc, char * * argv)
{
	//Program title and introductory line breaks
	std::cout << "STL Algorithm test 3";
	std::cout << std::endl;
	std::cout << std::endl;
	
	//Declare and initialise STL Container object instance
	std::vector <char> v1 {{'a', 'g', 'k', 'p', 'u'}};
	
	//Call the STL Algorithm function
	std::for_each
	(
		v1.begin (),
		v1.end (),
	
		//Lambda function, defined inline
		//Empty capture list, as stateless in this example
		[]
		
		//Input the character from the element in the STL Container
		(char x)
		
		//Now define inline function to be executed
		{
			//Output value of x, followed by a space
			std::cout << x;
			std::cout << " ";
		}
	);
	
	//Finish with line breaks
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
