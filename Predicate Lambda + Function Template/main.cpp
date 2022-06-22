/*

	Program
		Function Templates and Predicate Lambdas.
	
	Description
		Terminal program.
		Uses a function template with a predicate lambda function, so generic data types can be handled in the function template itself.
		The predicate lambda, however, is explicitly designed to accommodate integer values, but can also be redefined in order to allow for other types using the "auto" keyword.
	
	Author
		Sacha

	Date
		9.2.2022

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

/*
	Function template.
	Returns void.
	Argument 1
		Read-only.
		Take a pointer to a vector object of generic type, "A".
		Name this local variable "vec".
	Argument 2
		Take a std::function (functor object, function pointer, or a lambda function).
		Return type bool, pass argument of generic type, "A".
		Name this local variable "l".
*/
template <typename A>
void f1 (const std::vector <A> * vec, std::function <bool (A)> l)
{
	/*
		For each loop.
		Cycle through the elements of the vector object BY REFERENCE.
		Declare read-only in order to avoid the risk of data corruption.
		Note that the vector needs to be dereferenced as the function's local variable is a pointer to the vector.
	*/
	for (const A & v : * vec)
	{
		/*
			If the lambda function returns true...
		*/
		if (l (v))
		{
			/*
				Output the element of the vector, followed by a line break.
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
	std::cout << "Function Templates and Predicate Lambdas";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare vector instance.
		Declare elements of type int.
		Name vector instance "v1".
		Initialise a few elements with a predefined value.
	*/
	std::vector <int> v1 {1, 5, 11, 12, 19};
	
	/*
		Define an example lambda function.
		Return type bool.
		Input type int.
		Name the lambda function "l1".
	*/
	std::function <bool (int) > l1
	{
		/*
			Empty capture list.
			Stateless.
		*/
		[]
		
		/*
			Integer parameter.
		*/
		(int x)
		
		/*
			Return type is explicitly boolean.
		*/
		-> bool
		{
			/*
				Boolean criteria, return true if the value of the integer is greater than 10.
			*/
			return x > 10;
		}
	};
	
	/*
		Call the Template Function, "f1".
		Argument 1
			Pass in the reference of the vector "v1" (remember that the parameter for "f1" is a pointer to a vector, so this will need the value of a memory address).
		Argument 2
			Pass in the lambda function, "l1".
			No nested arguments are required here as they are dealt with when the lambda function is actually called from within the template function "f1".
	*/
	f1 (& v1, l1);

	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
