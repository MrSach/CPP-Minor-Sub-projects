/*

	Program
		Pointers - Declaration and Assignment
	
	Description
		Terminal program.
		Initialises an example pointer to an integer to nullptr.
		The pointer's memory location, target memory location and dereferenced value, where applicable, are output to the terminal.
	
	Author
		Sacha

	Date
		8.12.2021

*/

#include <iostream>

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Declare and initialise pointer to integer.
		Initialise to nullptr.
	*/
	int * ptr_a {nullptr};
	
	std::cout << std::endl;
	
	/*
		Output the target memory address of the pointer (should be 0).
		Note that because the pointer's target memory location is 0, dereferencing this may cause the program to fail.
	*/
	std::cout << ptr_a;
	std::cout << std::endl;
	
	/*
		Output the source memory address of the pointer (should be a memory location in the stack).
	*/
	std::cout << & ptr_a;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Assign a new memory location for the target pointer.
		This should now allocate memory on the heap for the pointer's target variable.
	*/
	ptr_a = new int;

	/*
		Output the dereferenced value for this new integer.
	*/
	std::cout << * ptr_a;
	std::cout << std::endl;
	
	/*
		Output the target memory location for the new integer variable.
	*/
	std::cout << ptr_a;
	std::cout << std::endl;
	
	/*
		Output the memory location for the pointer, itself.
	*/
	std::cout << & ptr_a;
	std::cout << std::endl;
	std::cout << std::endl;

	/*
		Assign the dereferenced variable's value to 100.
	*/
	* ptr_a = 100;
	
	/*
		Output the dereferenced value of the integer.
	*/
	std::cout << * ptr_a;
	std::cout << std::endl;
	
	/*
		Output the memory location of the target integer.
	*/
	std::cout << ptr_a;
	std::cout << std::endl;
	
	/*
		Output the memory location of the pointer, itself.
	*/
	std::cout << & ptr_a;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
