/*

	Program
		Factorial Test - Loop method with vector
	
	Description
		This program performs the Factorial calculation of positive integer values up to the capacity of an unsigned long long int.
		The method used is a for loop.
		Each iteration stores the calculated value into a vector, which behaves as a numeric sequence.
		For reference the factorial formula is:
		factorial (n) = n * factorial (n - 1),
		where factorial (0) = 1.
		For debugging the result is compared against a guided approach that uses recursion instead of looping with vectors.
	
	Author
		Sacha

	Date
		15.10.2021, revised 18.5.2022

*/

#include <iostream>
#include <vector>

/*
	Factorial function with looping and vectors.
*/
unsigned long long factorial_vector_test (unsigned long long value)
{
	/*
		Check if the factorial to calculate is 0.
	*/
	if (value == 0)
	{
		std::cout << "n = 0";
		std::cout << std::endl;
		std::cout << "Factorial (0) = 1";
		std::cout << std::endl;
		std::cout << std::endl;
		return 1;
	}
	
	/*
		If not zero, progress to the loop.
	*/
	else
	{
		/*
			Declare vector of unsigned long long type.
			Initialise with value of 1 for first instance.
		*/
		std::vector <unsigned long long> numerical_values {1};
		
		/*
			Loop through multiplication of current value of n against the result of the last iteration.
			Remember that factorial (n) = n * factorial (n - 1).
			Using vectors makes this simple.
			All we need to do is use the nth value, and multiply it against the (n - 1)th element in the vector as this has already been calculated and stored!
			So, we already have n = 0, which is 1.
			Factorial (1) would therefore be 1 * 1 = 1.
			Factorial (2) = 2 * 1 = 2.
			Factorial (3) = 3 * 2 = 6.
			And so forth...
			The loop continues until either the loop processes the nth iteration ("value" in this case), or there is an error, such as exceeding the limit of the data that can be stored in an unsigned long long int.
		*/
		for (unsigned long long i {1}; i <= value; ++i)
		{
			/*
				Add factorial value for current iteration using the current iteration number and the result of the previous iteration.
			*/
			numerical_values.push_back (i * (numerical_values.at (i - 1)));
			
			/*
				Display data for current iteration.
			*/
			std::cout << "n = ";
			std::cout << i;
			std::cout << std::endl;
			std::cout << "Factorial (";
			std::cout << i;
			std::cout << ") = ";
			std::cout << numerical_values.at(i);
			std::cout << std::endl;
			std::cout << std::endl;
			
		}
		/*
			Copy the last element in the vector into a separate variable and return this value.
		*/
		unsigned long long result {numerical_values.at (numerical_values.size () - 1)};
		return result;
	}
}

/*
	Guided recursive method.
	This was used to compare against my method of looping and the use of an STL Container.
	As testing for the same factorial numbers has given consistent results, it has been useful for comparison sake.
	The recursive method is also much smaller and streamlined, although much more difficult to follow and debug.
*/
unsigned long long factorial (unsigned long long n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * factorial (n - 1);
}

/*
	Main function.
*/

int main ()
{
	/*
		Debug title.
	*/
	std::cout << "Factorial test - loop and vector method";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Example - find the factorial of 10.
	*/
	factorial_vector_test (10);

	/*
		Line break.
	*/
	std::cout << std::endl;
	
	return 0;
}
