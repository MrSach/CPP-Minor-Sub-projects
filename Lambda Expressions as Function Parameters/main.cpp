/*

	Program
		Passing Lambda Expressions as Function Parameters
	
	Description
		Terminal Program.
		Explores passing through lambda functions as function parameters.
	
	Author
		Sacha

	Date
		7.2.2022

*/

#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

/*
	Define void function
*/
void f1

/*
	Define lambda function as parameter.
	Return type is void, argument is a single integer value.
	Name this lambda function "l".
*/
(std::function <void (int)> l)
{
	/*
		Call the parameter's lambda function and pass through 0.
	*/
	l (0);
}

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "Passing Lambda Expressions as Function Parameters";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Lambda function, return automatic type.
	*/
	auto l1
	{
		/*
			Stateless capture list
		*/
		[]
		
		/*
			Pass in automatic type for single parameter, "x".
		*/
		(auto x)
		{
			/*
				Output the value of "x" twice.
			*/
			std::cout << x << x << std::endl;
		}
	};

	/*
		Call the void function "f1" and pass in "l1", which is the lambda function.
	*/	
	f1 (l1);
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
