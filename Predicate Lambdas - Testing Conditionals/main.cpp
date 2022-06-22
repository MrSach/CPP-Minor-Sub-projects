/*

	Program
		Predicate Lambdas - Testing Conditionals
	
	Description
		Terminal program.
		Tests predicate lambdas.
		This example uses a predicate lambda function that passes an integer value as an argument and returns a boolean value based on a condition.
		
	Author
		Sacha

	Date
		7.2.2022

*/

#include <iostream>
#include <functional>
#include <vector>

/*
	Function "f1", which is void.
	Passes a pointer to a vector with type int, name this "vec".
	Also pass a parameter that is a lambda function that returns a type bool, passes an argument of type int, and name it "l".
*/
void f1 (const std::vector <int> * vec, std::function <bool (int)> l)
{
	/*
		For each loop.
		Cycle through vector elements.
	*/
	for (const int & v : * vec)
	{
		/*
			Check if value returned by predicate lambda function is true.
		*/
		if (l (v))
		{
			/*
				If true, output the element's value and a line break.
			*/
			std::cout << v;
			std::cout << std::endl;
		}
	}
}

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Predicate Lambdas - Testing Conditionals";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare std vector of type int.
		Name it "val".
		Initialise with some elements.
	*/
	std::vector <int> val {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	/*
		Declare lambda function.
		As the argument to pass needs to be a pointer, a reference to the vector object can be used here.
		The lambda function is then defined inline as an argument during the function call.
		Again, data types need to match those from the function declaration.
	*/
	f1 (& val,
	[]
	(int x)
	{
		return x > 5;
	}
	);
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
