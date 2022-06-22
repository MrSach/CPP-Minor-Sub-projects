/*

	Program
		Stringstream - Extraction
	
	Description
		Terminal program.
		Prompts the user for input for different data types.
		The program then outputs the user-entered data to the terminal.
	
	Author
		Sacha

	Date
		29.1.2022

*/

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title and Line breaks.
	*/
	std::cout << "Stringstream - Extraction";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Prompt for a double floating-point value.
	*/
	std::cout << "Enter a double floating point value: ";
	
	/*
		Declare a string to buffer the user input.
		Initialise as empty string. 
	*/
	std::string buff {};
	
	/*
		Extract as single series of characters, up to the next whitespace/carriage return.
	*/
	std::cin >> buff;
	
	/*
		Declare the stringstream object.
		Initialise to the value given by the string buffer.
	*/
	std::stringstream ss1 {buff};
	
	/*
		Declare the double.
		Initialise as default value.
	*/
	double dou1 {};
	
	/*
		Extract contents of the stringstream object and store into the new double value.
	*/
	if (ss1 >> dou1)
	{
		/*
			Output the value of the double.
			An exact match with the original user input demonstrates that this has worked correctly.
		*/
		std::cout << dou1;
		std::cout << " entered";
		std::cout << std::endl;
	}
	
	/*
		Clear the buffer for the cin command, and discard any extraneous data from the input.
	*/
	std::cin.ignore (std::numeric_limits <std::streamsize>::max (), '\n');
	
	/*
		Further clear the string object as this has now served its purpose.
	*/
	buff.clear ();
	
	/*
		The first stringstream object has also served its purpose, so this can also be cleared.
	*/
	ss1.clear ();
	
	/*
		Prompt for a single character to be entered.
	*/
	std::cout << "Enter a single character: ";
	
	/*
		Declare string buffer.
		Initialise as empty string.
	*/
	std::string buff2 {};
	
	/*
		Receive data input for the string buffer, up to the whitespace/carriage return.
	*/
	std::cin >> buff2;
	
	/*
		Declare stringstream object.
		Initialise to the value of the string buffer.
	*/
	std::stringstream ss2 {buff2};
	
	/*
		Declare new character variable.
		Initialise as an empty character.
	*/
	char ch1 {};
	
	/*
		Extract contents of the stringstream object and store into the character.
		If the user entered more than one character, only the first will be displayed.
	*/
	if (ss2 >> ch1)
	{
		/*
			Output the entered data to the terminal.
		*/
		std::cout << ch1;
		std::cout << " entered";
		std::cout << std::endl;
	}
	
	/*
		Clear extraneous data that is buffered in the input stream.
	*/
	std::cin.ignore (std::numeric_limits <std::streamsize>::max (), '\n');
	
	/*
		Clear string and stringstream buffers.
	*/
	buff2.clear ();
	ss2.clear ();
	
	/*
		Prompt for different data types in the same line of input.
	*/
	std::cout << "Enter 1 - a whole number, 2 - a word, 3 - a boolean value, each separated by spaces: ";
	
	/*
		Declare and initialise new string buffer.
		Initialise as an empty string.
	*/
	std::string buff3 {};
	
	/*
		As this is a line of input and not just a single sequence of characters, the getline command is necessary here.
		It uses cin and should store the input result into the new string variable that is used to buffer the input data.
	*/
	std::getline (std::cin, buff3);
	
	/*
		Declare new stringstream variable.
		Initialise to the value of the string buffer.
	*/
	std::stringstream ss3 {buff3};
	
	/*
		Declare new integer variable.
		Initialise to the default value.
	*/
	int in1 {};
	
	/*
		Declare new string variable.
		Initialise as an empty string.
	*/
	std::string str1 {};
	
	/*
		Declare a new boolean variable to store the boolean part of the user data.
		Initialise to default value.
	*/
	bool b1 {};
	
	/*
		Extract from the stringstream object and read from it sequentially into the data type-specific variables in the correct order.
		If the user entered the data correctly, the program should output the results.
	*/
	if (ss3 >> in1 >> str1 >> b1)
	{
		std::cout << "Entered:";
		std::cout << in1;
		std::cout << std::endl;
		std::cout << str1;
		std::cout << std::endl;
		std::cout << b1;
		std::cout << std::endl;
	}
	
	/*
		A note on std::cin.ignore - only use with std::cin.get, do not use with std::getline!
	*/
	
	/*
		Clear the string and stringstream variables as the program is now finished with using them.
	*/
	buff3.clear ();
	ss3.clear ();
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
