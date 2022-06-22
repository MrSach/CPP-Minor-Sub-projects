/*

	Program
		Stringstream - Insertion
	
	Description
		Terminal program.
		Reads a predefined std::string and then inserts this into a std::stringstream.
		Next, the program outputs the stringstream object, which should appear to be identical to the original string object.
	
	Author
		Sacha

	Date
		29.1.2022

*/

#include <iostream>
#include <string>
#include <sstream>

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Stringstream - Insertion";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare string.
		Initialise to predefined value.
	*/
	std::string data {"Hello I am a string with numbers and text! 1000 10 34 77 98423...        {} () *^^%$£"};
	
	/*
		Declare stringstream object.
		Initialise as empty.
	*/
	std::stringstream ss1 {};
	
	/*
		Insert the string object's data into the value of the stringstream object.
	*/
	ss1 << data;
	
	/*
		Output the stringstream object to the terminal.
	*/
	std::cout << ss1.str ();
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
