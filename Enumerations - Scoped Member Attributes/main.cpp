/*
	Program
		Scoped Enumerations - Member Attributes
	
	Description
		Terminal program.
		Shows the Scoped Enumerations when used as class member attributes.
	
	Author
		Sacha

	Date
		2.7.2022
*/

#include <iostream>

#include "Labels.hpp"

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title
	*/
	std::cout << "Scoped Enumerations - Member Attributes";
	
	/*
		Line breaks
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Declare a new "Labels" object.
		Name this instance "l1".
		Initialise without arguments.
		Constructor will be called with no parameters.
		Also call the method to output the numeric 'magic codes' for the enumerator keys.
		Then call the method to display the labels mirrored from the enumeration keys.
	*/
	Labels l1 {};
	l1.output_code ();
	l1.output_label ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Similar to above, but with some numeric arguments passed through to the Constructor for two unsigned integer arguments.
		These are used to initialise the object with magic codes mapped to enumeration keys.
		The numeric magic code keys are then output and also the labels associated with those numeric indices for each respective enumeration class.
	*/
	Labels l2 {7, 6};
	l2.output_code ();
	l2.output_label ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		This test instantiates a new object with indices that fall beyond the scope of the mapped enumeration keys.
		There is no 13th month, nor is there an eight day of the week.
		As a result, the Constructor for numeric unsigned integer values will use the filters to reassign the values to the default, which is 0.
		The new numeric enumeration indices will be output, which should show as 0.
		Then, the labels that are associated with the indices are displayed.
		These should show as "Unknown" for both the month and the weekday.
	*/
	Labels l3 {13, 8};
	l3.output_code ();
	l3.output_label ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Instantiate a new object with enumeration keys as opposed to the numeric indices that corespond to the 'magic numbers' for each argument.
		This explicitly shows that August is the month anf Sunday the weekday.
		Then, the numeric index is shown for the month and the weekday.
		The labels for the month and the weekday are finally shown, which should represent the values assigned earlier.
	*/
	Labels l4 {Labels::Month::August, Labels::Weekday::Sunday};
	l4.output_code ();
	l4.output_label ();
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

