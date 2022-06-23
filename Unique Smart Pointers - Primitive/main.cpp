/*

	Program
		Unique Smart Pointers
	
	Description
		Terminal program.
		Declares primitive data type instances using the C++ Standard Library's unique smart pointer.
		This program demonstrates the use of the smart pointer library in declaration and initialisation.
		It then demonstrates the use of accessing the variables through the smart pointer, which need to be dereferenced.
		The advantage of this is that there is no need to manually specify when to deallocate memory for the data that is being handled by the smart pointer.
		C++ does support garbage collection for smart pointers, so the memory is implicitly deallocated at the end of the program.
	
	Author
		Sacha

	Date
		23.6.2022

*/

#include <iostream>
#include <memory>
#include <string>

/*
	Main program
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks
	*/
	std::cout << "Unique Smart Pointers";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Integer example
	*/
	std::unique_ptr <int> smart_int_1 {std::make_unique <int> (0) };
	std::cout << "smart_int_1 = ";
	std::cout << * smart_int_1;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Floating point example
	*/
	std::unique_ptr <double> smart_double_2 {std::make_unique <double> (33.85) };
	std::cout << "smart_double_2 = ";
	std::cout << * smart_double_2;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Boolean example
	*/
	std::unique_ptr <bool> smart_bool_3 {std::make_unique <bool> (1) };
	std::cout << "smart_bool_3 = ";
	std::cout << * smart_bool_3;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		String example
	*/
	std::unique_ptr <std::string> smart_string_4 {std::make_unique <std::string> ("Hello, World!") };
	std::cout << "smart_string_4 = ";
	
	/*
		Note that as this is a C++ String, this will need to be explicitly dereferenced!
	*/
	std::cout << * smart_string_4;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
