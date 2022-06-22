/*

	Program
		Iterators in C++ - Test 2
	
	Description
		Terminal program.
		This program explores another example of using STL Iterators with STL Containers.
		The Container method "crbegin" and "crend" return Iterators to read-only locations within the STL Container.
		In this loop the Iterators actually point to locations in the reverse order of the Container's elements, although they are processed in loops like the forward iterators.
		Before an element can be output, the Iterator is then dereferenced.
		When dereferenced, the Container element is output to the output stream and the loop repeats.
	
	Author
		Sacha

	Date
		30.1.2022

*/

#include <iostream>
#include <deque>
#include <iterator>

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Iterator test 2 title
	*/
	std::cout << "Iterator test 2";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare and initialise deque object instance.
		Name it "t1".
		Initialise with some test values.
	*/
	std::deque <double> t1 {1, 3, 5, 8, 11, 15, 4, 2};
	
	/*
		Loop through the elements in the deque through Iterators.
	*/
	for (auto it1 {t1.crbegin ()}; it1 < t1.crend (); ++it1)
	{
		/*
			Dereference Iterator value, then output value.
		*/
		std::cout << * it1;
		std::cout << " ";
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
