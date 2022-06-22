/*

	Program
		Fibonacci Test using looping and STL Vectors
	
	Description
		This program performs the Fibonacci sequence, where:
		Fibonacci (n) = Fibonacci (n - 1) + Fibonacci (n - 2)
		and
		Fibonacci (0) = 0
		Fibonacci (1) = 1
		
		These two values are recorded in a vector sequence.
		They are then added together to get Fibonacci (2), which is 0 + 1 = 1.
		So, Fibonacci (3) = Fibonacci (1) + Fibonacci (2) = 1 + 1 = 2.
		Fibonacci (4) = 1 + 2 = 3
		
	
	Author
		Sacha

	Date
		15.10.2021, revised 18.5.2022

*/

#include <iostream>
#include <vector>

/*
	Fibonacci algorithm, uses vectors and looping
*/
unsigned long long fibonacci_test (unsigned long long value)
{
	/*
		Check if the value is a fixed value that does not need to be calculated (e.g. 0 or 1).
	*/
	if (value < 1)
	{
		/*
			Fibonacci (0) = 0
		*/
		std::cout << "n = 0";
		std::cout << std::endl;
		std::cout << "Fibonacci (0) = 0";
		std::cout << std::endl;
		std::cout << std::endl;
		return value;
	}
	else if (value < 2)
	{
		/*
			Fibonacci (1) = 1
		*/
		std::cout << "n = 1";
		std::cout << std::endl;
		std::cout << "Fibonacci (1) = 1";
		std::cout << std::endl;
		std::cout << std::endl;
		return value;
	}
	else
	{
		/*
			Generate the Fibonacci sequence.
			n = 0 and n = 1 are fixed numbers, so add to the vector.
		*/
		std::vector <unsigned long long> numerical_values {0, 1};
		
		/*
			Loop through the Fibonacci sequence and terminate when the value of Fibonacci (n) is found
		*/
		for (unsigned long long i {2}; i <= value; ++i)
		{
			numerical_values.push_back (numerical_values.at (i - 2) + numerical_values.at (i - 1));
			/*
				Output details of current iteration.
			*/
			std::cout << "n = ";
			std::cout << i;
			std::cout << std::endl;
			std::cout << "Fibonacci (";
			std::cout << i;
			std::cout << ") = ";
			std::cout << numerical_values.at (i);
			std::cout << std::endl;
			std::cout << std::endl;
		}
		
		/*
			Copy the result into a separate variable, then return.
		*/
		unsigned long long result {numerical_values.at (numerical_values.size () - 1)};
		return result;
	}
}

/*
	Main function
*/
int main()
{
	/*
		Title and line breaks.
	*/
	std::cout << "Fibonacci sequence - looping with vectors";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Example - find the Fibonacci sequence of 30.
	*/
	fibonacci_test (30);
	
	/*
		Line break.
	*/
	std::cout << std::endl;
	
	return 0;
}
