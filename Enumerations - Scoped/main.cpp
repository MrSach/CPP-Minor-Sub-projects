/*
	Program
		Enumerations - Scoped
	
	Description
		Terminal program.
		Shows an example of the scoped enumeration technique in action.
		Enumerations are declared as classes and use integer data types mapped to keys.
	
	Author
		Sacha

	Date
		2.7.2022
*/

#include <iostream>

enum class Box : int {None = 0, Bead = 1, Ball = 2, Counter = 3, Medallion = 4};

enum class Cupboard : int {None = 0, Towel = 1, Drawers = 2, Ball = 3};

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "Enumerations - Scoped";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare a new "Box" object instance.
		Name this "box_1".
		Initialise to the value of Box::None, which is 0.
		Output this to the output stream.
	*/
	int box_1 {static_cast <int> (Box::None)};
	std::cout << "box_1 code = ";
	std::cout << box_1;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare a new "Box" object instance.
		Name this "box_2".
		Initialise to the value of Box::Ball, which is 2.
	*/
	int box_2 {static_cast <int> (Box::Ball) };
	std::cout << "box_2 code = ";
	std::cout << box_2;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Output the numeric code for the value of the Box::Counter enumeration key.
	*/
	std::cout << "The code for Box::Counter is ";
	std::cout << std::underlying_type_t <Box> (Box::Counter);
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare new instance of the "Cupboard" object.
		Initialise to Cupboard::Ball, which has the value of 3.
		Output the numeric code for the enumeration key stored in "cup_1", which should be 3.
	*/
	Cupboard cup_1 {Cupboard::Ball};
	std::cout << "cup_1 code = ";
	std::cout << static_cast <int> (cup_1);
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare new instance of "Cupboard" and name it "cup_2".
		Convert the value of 2 to the enumeration key for "Cupboard" and initialise the new object with this key.
		Then output the numeric code of "cup_2" to the output stream, which is 2.
	*/
	Cupboard cup_2 {static_cast <Cupboard> (2)};
	std::cout << "cup_2 code = ";
	std::cout << static_cast <int> (cup_2);
	std::cout << std::endl;
	std::cout << std::endl;
	
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

