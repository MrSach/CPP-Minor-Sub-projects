#include <iostream>
#include <string>

/*

	Program
		Arrays - test 14 - Testing C++ Character String Arrays
	
	Description
		Debug program - designed for learning how to manage arrays for C++ objects, and how to understand the use of pointers to these C++ objects.
		An example of "hello world" is given in this program, but with some changes.
		
	Author
		Sacha

	Date
		8.12.2022

*/

int main (int argc, char * * argv)
{
	/*
		Just another debug program
		Title omitted in this example
	*/
	
	//Declare empty character string array of 3 elements.
	std::string arr_1 [3] {};
	
	//Declare empty character string, no array.
	std::string test_1 {};
	
	//Declare empty pointer to a character string.
	std::string * test_2 {};
	
	//Assign arr_1 elements
	arr_1[0] = "hello";
	arr_1[1] = " - ";
	arr_1[2] = "world";
	
	//Assign value of first element of arr to test_1.
	test_1 = arr_1 [0];
	
	//Next, assign value of "HELLO" to test_1 instead.
	test_1 = "HELLO";
	
	//Now, output contents of array arr_1.
	std::cout << "Array 1: ";
	std::cout << arr_1[0];
	std::cout << arr_1[1];
	std::cout << arr_1[2];
	std::cout << std::endl;
	std::cout << test_1;
	std::cout << std::endl;
	
	/*
		Output references for the arr_1 elements, and also the base arr_1 memory location, itself.
		& arr_1 points to the first element and so shares the same memory address as & arr [1]
	*/
	std::cout << & arr_1;
	std::cout << std::endl;
	std::cout << & arr_1 [0];
	std::cout << std::endl;
	std::cout << & arr_1 [1];
	std::cout << std::endl;
	std::cout << & arr_1 [2];
	std::cout << std::endl;
	
	//Assign test_2 the address of arr_1 [2]
	test_2 = & arr_1 [2];
	
	/*
		Dereference to get the value stored in arr_1 [2]
		Next, assign the value of "WORLD" to arr_1 [2], which overwrites the existing value of "world"
	*/
	* test_2 = "WORLD";
	
	//Should output what * test_2 has just been assigned.
	std::cout << * test_2;
	std::cout << std::endl;
	
	//Should output what * test_2 just output as it now shares the same memory location when dereferenced!
	std::cout << arr_1 [2];
	std::cout << std::endl;
	
	//Next test, output elements in the array
	std::cout << "Array 1b: ";
	std::cout << arr_1 [0];
	std::cout << arr_1 [1];
	std::cout << arr_1 [2];
	std::cout << std::endl;
	
	//output test_1, which should be "HELLO"
	std::cout << test_1;
	std::cout << std::endl;
	
	std::cout << std::endl;
	
	//Loop through arr_1 using the C++ for each loop, then output elements
	for (std::string str : arr_1)
	{
		std::cout << str;
		std::cout << std::endl;
	}
	
	//Another for each loop, this time by the character against the element arr_1 [2]
	//Should ouptut "W", "O", "R", "L", "D", all over separate lines.
	for (char ch : arr_1 [2])
	{
		std::cout << ch;
		std::cout << std::endl;
	}
	
	//Line breaks
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
