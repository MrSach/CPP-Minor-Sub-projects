/*

	Program
		Memory Allocation - Static vs Dynamic - Test 2
	
	Description
		Terminal program.
		Tests static and dynamic memory allocation, particularly for C character variables and pointers.
		The program demonstrates simple methods for allocating memory for integer variables and pointers to integer variables.
		Referencing C characters can be problematic in C++.
		This program demonstrates 3 examples of problems and the workarounds that can be used in order to overcome these limitations:
			Corrupt output for displaying references for char variables
			The need to reference target memory addresses for char pointers.
			Using the normal identifier, char32_t and related data types display ASCII index instead of the corresponding character.
		Typecasting can assist with these issues, although it is not necessarily a solution to them as they are in themselves limited.
		Depending on the target platform, it may be better to use another, more suitable C++-specific library, such as the STL std::string object, or a third party Unicode-friendly character library.
	
	Author
		Sacha

	Date
		20.12.2021, revised 30.5.2022

*/

#include <iostream>

/*
	Main Function
*/
int main (int argc, char * * argv)
{
	/*
		Program title.
		Line breaks.
	*/
	std::cout << "Memory Allocation - Static vs Dynamic - Test 2";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare an int.
		initialise to 0.
	*/
	int placeholder {0};
	std::cout << "& placeholder = ";
	std::cout << & placeholder;
	std::cout << std::endl;
	std::cout << "placeholder = ";
	std::cout << placeholder;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare pointer to int.
		Initialise to nullptr.
	*/
	int * placeholder2 {nullptr};
	
	/*
		This pointer can then be assigned a memory address for a new integer variable, but is not yet initialised.
	*/
	placeholder2 = new int;
	
	/*
		The value of the pointer is dereferenced and assigned a value of 0.
	*/
	* placeholder2 = 0;
	std::cout << "& placeholder2 = ";
	std::cout << & placeholder2;
	std::cout << std::endl;
	std::cout << "placeholder2 = ";
	std::cout << placeholder2;
	std::cout << std::endl;
	std::cout << "* placeholder2 = ";
	std::cout << * placeholder2;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare another pointer to integer.
		Name it "num".
		Initialise to a new integer in memory and initialise that to the value of 33.
		This consolidates the process of declaring and initialising the pointer and its target variable into a single statement!
	*/
	int * num {new int {33} };
	std::cout << "& num = ";
	std::cout << & num;
	std::cout << std::endl;
	std::cout << "num = ";
	std::cout << num;
	std::cout << std::endl;
	std::cout << "* num = ";
	std::cout << * num;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare a character variable.
		Name it "var1".
		Initialise to 'a'.
	*/
	char var1 {'a'};
	
	std::cout << "& var1 = ";
	
	/*
		Referencing the character variable without typecasting will not be displayed properly.
	*/
	std::cout << & var1;
	std::cout << std::endl;
	/*
		When typecasting the reference of the variable, the memory address can be displayed better.
	*/
	std::cout << "& var1, void * typecast = ";
	std::cout << static_cast <void *> (& var1);
	std::cout << std::endl;
	std::cout << "var1 = ";
	
	/*
		Using the character variable identifier gives the value of the variable, as expected.
	*/
	std::cout << var1;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare pointer to char.
		Name it "ptr1".
		Initialise to 'b'.
	*/
	char * ptr1
	{
		new char {'b'}
	};
	
	/*
		Referencing the pointer itself gives a normal result, which is its memory address on the stack.
	*/
	std::cout << "& ptr1 = ";
	std::cout << & ptr1;
	std::cout << std::endl;
	
	/*
		Although not necessary, the typecasting for the reference of the pointer variable "ptr1" should give the same result as not typecasting.
	*/
	std::cout << "& ptr1, void * typecast = ";
	std::cout << static_cast <void *> (& ptr1);
	std::cout << std::endl;
	
	/*
		Dereferenced as this is a pointer to a character.
		Imagine a string is being expected here and the reasoning should become clear.
	*/
	std::cout << "ptr1 = ";
	std::cout << ptr1;
	std::cout << std::endl;
	
	/*
		Dereference the pointer value.
		This is also valid and should give the same result with or without the dereference operator.
	*/
	std::cout << "* ptr1 = ";
	std::cout << * ptr1;
	std::cout << std::endl;
	
	/*
		Still dereferenced.
	*/
	std::cout << "& * ptr1 = ";
	std::cout << & (* ptr1);
	std::cout << std::endl;
	
	/*
		Again, still dereferenced.
	*/
	std::cout << "* & ptr1 = ";
	std::cout << * (& ptr1);
	std::cout << std::endl;
	
	/*
		To get the memory address of where the pointer is pointing to (target memory address), typecasting is needed here, using the same method as with displaying the reference for a character variable.
	*/
	std::cout << "ptr1, void * typecast = ";
	std::cout << static_cast <void *> (ptr1);
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Here is another example with a 32-bit character variable, "var2".
		Initialised to '0', how are the memory location and value displayed?
	*/
	char32_t var2 {'0'};
	
	/*
		Referencing the variable is ok, use as normal.
	*/
	std::cout << "char32_t & var2 = ";
	std::cout << & var2;
	std::cout << std::endl;
	
	/*
		Using the variable identifier directly for output gives the ASCII code instead of the character it represents.
	*/
	std::cout << "char32_t var2 = ";
	std::cout << var2;
	std::cout << std::endl;
	
	/*
		To display the 8-bit ASCII character, typecasting to a C character may be necessary.
	*/
	std::cout << "char32_t var2 typecast from char32_t to char = ";
	std::cout << static_cast <char> (var2);
	std::cout << std::endl;
	
	/*
		Remember to deallocate dynamically-allocated data after use!
	*/
	delete placeholder2;
	delete num;
	delete ptr1;
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
