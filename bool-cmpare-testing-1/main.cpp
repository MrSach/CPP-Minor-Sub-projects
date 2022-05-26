#include <iostream>
#include <cstring>

/*

	Program
		String compare testing using C Standard Library commands for comparing C-style strings
	
	Description
		Creates several strings using C characters, compares them with C Standard Library functions and outputs the results.
	
	Author
		Sacha

	Date
		14.1.2022

*/

//Main function
int main (int argc, char * * argv)
{
	//Debug program - no explicit title given
	std::cout << "------";
	std::cout << std::endl;
	std::cout << std::endl;
	
	//Dynamically allocate character strings based on C characters
	char * str1 {new char[9]};
	char * str2 {new char[9]};
	char * str3 { new char [5] };
	
	//Assign values of different characters for each string
	std::strcpy(str1, "ABCDEFGH");
	std::strcpy(str2, "IJKLMNOP");
	std::strcpy(str3, "ABGH");
	
	/*
		Compare str1 against the other two separately
		In both cases since neither strings match with the first, a nonzero value is returned for both.
		For str1 vs str2, a value of -8 is given because the first character 'A' has an ASCII value of 8 letters before the character 'I'.
		For str1 vs str3, the 'A' matches, the 'B' matches, but the 'C' does not.
		In this case, 'C' is 4 characters before the character 'G', so the value output is -4. 
	*/
	std::cout << std::strcmp(str1, str2);
	std::cout << std::endl;
	std::cout << std::strcmp(str1, str3);
	std::cout << std::endl;
	
	//Clear dynamically allocated memory still on the heap!
	delete [] str1;
	delete [] str2;
	
	//End with line breaks
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
