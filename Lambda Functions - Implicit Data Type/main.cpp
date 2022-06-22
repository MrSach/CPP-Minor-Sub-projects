/*

	Program
		Lambda Functions - Implicit Data Type
	
	Description
		Terminal program.
		This program uses a lambda function, which does not explicitly specify what data types are returned or passed into the lambda function.
		This saves programming time as the "auto" keyword can be used to delegate the data type designations to the compiler so that the correct data types are known during the compilation process.
		In this example program an STL Container object of data type double is used.
		Therefore, the argument passed into the lambda function will be of data type double.
		As the lambda function does not return a variable or a value, the return data type expected would be void. 
	
	Author
		Sacha

	Date
		9.2.2022

*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Lambda Functions - Implicit Data Types";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		STL Container object, which is a vector containing doubles in this case.
	*/
	std::vector <double> v1 {44.1, 90.3, 88.3, 51.2, 10.6};
	
	/*
		STL Algorithm function, std::for_each.
		Processes the vector by element.
	*/
	std::for_each
	(
		v1.begin (),
		v1.end (),
		[]
		
		/*
			"auto" is used to allow for non-specific data types.
			This is very convenient as there is less duplication of code and also of labour overhead here.
		*/
		(auto x)
		
		/*
			Return types can also be implicit for data types.
		*/
		-> auto
		{
			/*
				Output the value of "x".
				Add a line break.
			*/
			std::cout << x;
			std::cout << std::endl;
		}
	);

	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
