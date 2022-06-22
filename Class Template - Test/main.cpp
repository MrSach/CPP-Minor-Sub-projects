/*

	Program
		C++ Generic Programming - Class Templates - Test 1
	
	Description
		Tests some Class Templates in C++ based on a data type that recreates a similar object to std::array.
	
	Author
		Sacha

	Date
		30.1.2022

*/

#include <iostream>
#include <string>
#include <iomanip>

#include "TestMe.hpp"

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Output program title
	*/
	std::cout << "C++ Class Templates - Test 1";
	std::cout << std::endl;
	std::cout << std::endl;

	/*
		Declare integer template instance with 10 entries, and initialise all to value of 5.
	*/
	TestMe <int, 10> t1 {5};
	
	/*
		Output t1 to the terminal.
	*/
	std::cout << t1;
	
	/*
		Declare TestMe of t2 to be allocated 6 doubles, all at 3.3
	*/
	TestMe <double, 6> t2 {3.3};
	
	/*
		Output values of t2
	*/
	std::cout << t2;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare a TestMe of type std::string, and allocate 4 entries.
		Initialise these to "Hello"
	*/
	TestMe <std::string, 4> t3 {"Hello"};
	
	/*
		Output element 3 from t3
	*/
	std::cout << t3 [2];
	std::cout << std::endl;
	
	/*
		Declare a template object t4 of type char, but allocate 0 entries for this.
	*/
	TestMe <char, 0> t4;
	
	/*
		Attempt to output t4, which should output nothing in this case.
	*/
	std::cout << t4;
	
	/*
		t5 is declared as a TestMe with type bool, and is allocated 7 entries of this.
		They are all initialised to be true.
	*/
	TestMe <bool, 7> t5 {1};
	
	/*
		Output value of t5, accounting for the boolean data type.
	*/
	std::cout << std::boolalpha << t5;
	std::cout << std::noboolalpha;
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
