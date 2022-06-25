/*
	Program
		Smart Pointers - Weak
	
	Description
		Terminal program.
		Shows how to use weak pointers for circular pointer flows.
	
	Author
		Sacha

	Date
		24.6.2022
*/

#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "Smart Pointers - Weak";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Allocate new objects dynamically using shared pointers.
	*/
	std::shared_ptr <A> test_a { std::make_shared <A> () };
	std::shared_ptr <B> test_b { std::make_shared <B> () };
	std::shared_ptr <C> test_c { std::make_shared <C> () };
	
	/*
		Get the memory locations and output for each object.
	*/
	std::cout << "test_a = ";
	std::cout << test_a . get ();
	std::cout << std::endl;
	std::cout << "test_b = ";
	std::cout << test_b . get ();
	std::cout << std::endl;
	std::cout << "test_c = ";
	std::cout << test_c . get ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Set the memory address of test_b as the next B object that A points to as a shared pointer.
	*/
	std::cout << "test_a member attributes:";
	std::cout << std::endl;
	test_a -> set_next_b ( test_b );
	test_a -> output_next_b ();
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Details for test_b
	*/
	std::cout << "test_b member attributes:";
	std::cout << std::endl;
	
	/*
		Set the "test_a" object as the previous "A" object pointed to by "test_b".
		Also set the "test_c" object as the next "C" object pointed to by "test_b".
		
	*/
	test_b -> set_previous_a ( test_a );
	test_b -> output_previous_a ();
	test_b -> set_next_c ( test_c );
	test_b -> output_next_c ();
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Details for test_c
	*/
	std::cout << "test_c member attributes:";
	std::cout << std::endl;
	
	/*
		Set the "test_b" object to be the previous "B" object pointed to by "test_c".
		Output the memory location of the "B" object that is pointed to by "test_c".
	*/
	test_c -> set_previous_b ( test_b );
	test_c -> output_previous_b ();

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


