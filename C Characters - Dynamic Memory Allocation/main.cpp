/*

	Program
		C++ Character Dereferencing - Test 5
	
	Description
		Allocates a C character dynamically using the new keyword and through a pointer.
		The dereferenced value is then assigned a character and debug data is output for the dereferenced value of the variable, the variable itself, which points to the address of the dereferenced value, and the memory address that holds the pointer itself.
	
	Author
		Sacha

	Date
		14.1.2022

*/

#include <iostream>

int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Character - pointers, references and dereferencing";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Dynamically allocate character, therefore declare a pointer.
	*/
	char * test {new char};
	
	/*
		Assign dereferenced value for the pointer.
	*/
	* test = 'A';
	
	/*
		Get the value of test when dereferenced.
	*/
	std::cout << * test;
	std::cout << std::endl;
	
	/*
		Get the value of test, which is the memory location of the character.
	*/
	std::cout << test;
	std::cout << std::endl;
	
	/*
		Get the memory address of test, which holds the pointer to the character.
	*/
	std::cout << & test;
	std::cout << std::endl;
	
	/*
		Delete dynamically allocated variable.
	*/
	delete test;
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
