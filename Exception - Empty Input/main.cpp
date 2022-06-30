/*
	Program
		Exceptions - Empty String Input
	
	Description
		Terminal program.
		Demonstrates exception handling, where the user is prompted to enter some text.
		The program should output the text that the user inputs.
		If the user inputs an empty string, or that they only input whitespace, then the program will throw an error, which notifies the user that the string input is empty.
	
	Author
		Sacha

	Date
		29.6.2022
*/

#include <iostream>
#include <string>
#include <sstream>

#include "Empty_String_Exception.hpp"

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "Exceptions - Empty String.";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Prompt user to input line of text.
	*/
	std::cout << "Please enter some text: ";
	std::cout << std::endl;
	
	/*
		Create string buffer for storing the input text.
	*/
	std::string input {};
	
	/*
		Receive input from user.
		This is a line of text and is terminated at the new line/carriage return.
	*/
	std::getline (std::cin, input);
	
	/*
		Create stringstream buffer to copy the temporary string buffer to.
	*/
	std::stringstream ss {};
	
	/*
		Extract the input string buffer's contents and write to the new stringstream.
	*/
	ss << input;
	
	/*
		Try block - test the exception handler!
	*/
	try
	{
		/*
			Declare a boolean variable to decide whether to throw the exception.
			Initialise to false, meaning the default is not to throw an exception yet.
		*/
		bool empty_string_flag {0};
		
		/*
			Check if the stringstream received is empty.
			If so, assign the exception flag to true.
		*/
		if (ss . str () . empty () )
		{
			empty_string_flag = 1;
		}
		
		/*
			Check if only a carriage return has been entered.
		*/
		else if (ss . str () == "\r")
		{
			empty_string_flag = 1;
		}
		
		/*
			Check if only a newline character has been entered.
		*/
		else if (ss . str () == "\n")
		{
			empty_string_flag = 1;
		}
		
		/*
			Check if a blank string has been entered.
		*/
		else if (ss . str () == "")
		{
			empty_string_flag = 1;
		}
		
		/*
			Check for whitespace at the beginning of the string.
		*/
		else if (ss . str () . at (0) == ' ')
		{
			/*
				Loop through the string by character, starting from the beginning.
				The objective is to check if the entire string consists of only spacebar characters.
			*/
			for (size_t i {0} ; i < ss . str () . length (); ++i )
			{
				/*
					Check if the end of the string has been reached yet.
				*/
				if (i == (ss . str () . length () ) - 1 )
				{
					/*
						Only whitespace characters were detected in this loop.
						Assign the check flag to true so that the exception for an empty string is thrown.
					*/
					empty_string_flag = 1;
				}
				
				/*
					If, during the loop, a non-whitespace character is found before the null character that terminates the string, exit the loop prematurely and do not flag as an empty string!
				*/
				else if (ss.str().at(i) != ' ')
				{
					break;
				}
			}
		}
		
		/*
			After the checks, execute according to the boolean check variable result.
			Display the string if not found to be empty.
		*/
		if (empty_string_flag == 0)
		{
			std::cout << "The string entered is:";
			std::cout << std::endl;
			std::cout << ss . str ();
		}
		
		/*
			If the string entered is found to be empty...
		*/
		else
		{
			/*
				Throw the exception!
			*/
			throw Empty_String_Exception ();
		}
	}
	
	/*
		Catch block - follows try block.
		This catch block will handle the empty string exception when caught.
	*/
	catch (Empty_String_Exception & e)
	{
		std::cerr << e . what ();
		std::cout << std::endl;
		std::cout << std::endl;
	}
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Return status - successful program execution.
	*/
	return 0;
}

