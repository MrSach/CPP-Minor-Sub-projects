/*

	Program
		Pass by Reference - Vector Example
	
	Description
		Terminal program.
		Main function declares and initialises a std::vector instance.
		This vector is then passed as a reference into another function, which directly accesses the vector's contents without needing the value of the variable to be copied.
		This is one advantage to C++, which allows support for passing by reference using the ampersand ("&") operator.
		Alternatively it is also possible to pass the memory location by value in order to achieve a similar effect.
		This would be done by passing in the reference of the variable as an argument instead of the dereferenced value.
		The parameter for the receiving function would then be defined to use a pointer to a vector instead of a reference to one.
	
	Author
		Sacha

	Date
		14.10.2021

*/

#include <iostream>
#include <vector>

/*
	Forward declaration prototype for the test function.
*/
void display_int_vector (const std::vector <int> & int_vector);

/*
	Function definition for the function to pass a parameter by reference.
*/
void display_int_vector (const std::vector <int> & int_vector)
{
	/*
		For each loop.
		In this case, the vector is passed by value here, not directly by reference.
		Elements are therefore copied and the copies are output in the loop.
	*/
	for (int item : int_vector)
	{
		std::cout << item;
		std::cout << std::endl;
	}
}

/*
	Main function.
*/
int main ()
{
	/*
		Declare and initialise vector of a few integer values.
		Then, pass the vector as normal into the function in order to pass by reference.
		No reference for the variable is required when passing as an argument as this is hanled by the function definition.
	*/
	std::vector <int> test_int_vector {1, 2, 3, 4, 5};
	display_int_vector (test_int_vector);
	
	return 0;
}
