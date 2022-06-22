/*

	Program
		Predicate Lambdas - rvalue Move Semantics
	
	Description
		Terminal program.
		Reviews passing through lvalues into a template function.
		Another template function is added with support for rvalue parameters.
		The functions are then called, which shows the differences between using lvalues and rvalues.
		std::move is used in order to force the treatment of the data as an rvalue.
	
	Author
		Sacha

	Date
		14.2.2022

*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <utility>

/*
	Function template with lvalue parameters.
*/
template <typename A, typename B>
void f1 (const std::vector <A> * v, std::function <bool (B)> & l)
{
	for (const A & i : * v)
	{
		if (l (i) == 1)
		{
			std::cout << i << " ";
		}
	}
}

/*
	Template function that passes through rvalue parameters.
	The vector in this example is an rvalue reference, as opposed to an lvalue pointer.
	std::function objects can also be handled as rvalues, which is demonstrated here.
*/
template <typename A, typename B>
void frr1 (const std::vector <A> && v, std::function <bool (B)> && l)
{
	/*
		Note the syntax.
		The elements are directly addressed by reference, while the vector is effectively dereferenced.
	*/
	for (const A & i : v)
	{
		if (l (i) == 1)
		{
			std::cout << i << " ";
		}
	}
}

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title, trivia and line breaks.
	*/
	std::cout << "Predicate Lambdas - rvalue Move Semantics.";
	std::cout << std::endl;
	std::cout << "Testing predicates a few days following a break from memory... good work!";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare and initialise vector object.
		Ensure that some values meet the boolean criteria from the predicate lambda function.
	*/
	std::vector <int> v1 {1, 7, 11, 27};
	
	/*
		Define the lvalue lambda function.
	*/
	std::function <bool (int)> test1
	{
		[]
		(int x)
		{
			return x > 10;
		}
	};
	
	/*
		Call the lvalue function template fucntion, "f1".
	*/
	f1 (& v1, test1);
	
	/*
		Tidy with line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Call the rvalue function template, "frr1".
		Pass through arguments that are declared and initialised inline, in order to keep the data as temporary as is possible.
		As can be observed, the std::move, with the data types in brackets, is a major difference to the lvalue methods, which do not require explicit syntax.
		lvalue data can also be declared, intialised and stored into variables at different stages of the program.
		This is not the case for rvalues as they are temporary and not addressable, so must be processed continuously.
	*/
	frr1 (std::move(std::vector <int> {1, 9, 15}),
		std::move
		(
			std::function <bool (int)>
			{
				[]
				(int x)
				-> bool
				{
					return x > 9;
				}
			}
		)
	);
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
