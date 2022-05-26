#include <iostream>

//error - cannot use ranged-based for loops for c-style char arrays when passing through to functions without an explicit size to accompany!

/*

	Program
		Implicit C string size issues - Testing array declarations and output of entire array
	
	Description
		This program tests declaring a C character string with no specified size, but initialised ith 4 defined elements.
		Although the C++ for each loop succeeds in running as expected, an explicit size of the array is needed in order to pass through the array properly into function calls.
		Also dereferencing the variable appears to display erratic results - not only do the first 4 characters appear when dereferencing the array directly, but other additional characters are being displayed, which may imply that the character string is expected to have more characters than were actually initialised.
	
	Author
		Sacha

	Date
		20.1.2022

*/

//Main function
int main (int argc, char * * argv)
{
	//Title with line breaks
	std::cout << "Char array - ranged for loop test";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare array of C characters with no explicit array size
		Initialise with a few characters
	*/
	char arr [] {'a', 'b', 'c', 'd'};

	//C++ for each loop
	for (auto c : arr)
	{
		//Output all the entries found in the array arr
		std::cout << c;
		std::cout << std::endl;
	}
	//Line break for tidiness
	std::cout << std::endl;
	
	//Output the array of characters - there may be more data that the program is outputting to the output stream than there are characters!
	std::cout << arr;
	std::cout << std::endl;
	
	//Line breaks
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
