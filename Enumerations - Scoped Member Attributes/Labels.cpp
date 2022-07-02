#include <iostream>

#include "Labels.hpp"

/*
	Define the list of months to cross-reference against the enumeration key indices. 
*/
std::vector <std::string> Labels::month_str
{
	{
		"Unknown",
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	}
};

/*
	Also define the list of weekday labels to cross-reference against the list of weekday enumeration indices.
*/
std::vector <std::string> Labels::weekday_str
{
	{
		"Unknown",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	}
};

/*
	Constructor - No Arguments.
*/
Labels::Labels ()
:
	/*
		Default arguments will be 0 for "Unknown" month and weekday.
	*/
	Labels {0, 0}
{
	
}

/*
	Constructor - Numeric Index.
	Each argument will be a positive integer.
	This will assign the month and the weekday for the given object as per the indices given.
*/
Labels::Labels (const unsigned int in_month, const unsigned int in_weekday)
:
	/*
		Convert the parameters to the respective enumeration keys, then use the values to initialise the object's individual attributes.
	*/
	month {static_cast <Month> (in_month)},
	weekday {static_cast <Weekday> (in_weekday)}
{
	/*
		Notify the user that the Constructor - Numeric Index Parameters, has been called.
	*/
	std::cout << "Constructor called with magic code parameters.";
	std::cout << std::endl;
	
	/*
		Give the memory address of the new object.
	*/
	std::cout << "New object location = ";
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Output the index of the month assigned to the object.
		This may be revised if this is found to be outside the valid range later.
	*/
	std::cout << "Month code entered = ";
	std::cout << in_month;
	std::cout << std::endl;
	
	/*
		Also display the weekday index.
		Again, this is subject to filtering later in this Constructor.
	*/
	std::cout << "Weekday code entered = ";
	std::cout << in_weekday;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Check if the month and weekday indices are within a permitted range.
		Reset to 0 if they are beyond the acceptable scope.
	*/
	if (in_month > 12)
	{
		this->month = static_cast <Month> (0);
	}
	
	if (in_weekday > 7)
	{
		this->weekday = static_cast <Weekday> (0);
	}
}

/*
	Constructor - Enumeration Key.
	This uses the Labels class' enumeration keys instead of a numeric reference.
	So, to pass through an enumeration key, the programmer would need to use, i.e. "Labels::Month::January" to pass through Month 1 for January.
	An enumeration key would also be necessary for the weekday, such as "Labels::Weekday::Monday", which is Weekday 1.
*/
Labels::Labels (const Month in_month, const Weekday in_weekday)
:
	/*
		Initialise the member attributes directly from the respective enumeration keys.
	*/
	month {in_month},
	weekday {in_weekday}
{
	/*
		Notify te user that the Constructor - Enumeration Keys, has been called.
	*/
	std::cout << "Constructor called with enumeration keys.";
	std::cout << std::endl;
	
	/*
		Output the memory address of the new object.
	*/
	std::cout << "New object location = ";
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Cross-reference against the vector member attribute containers to get the list of the labels for the month and weekday that have been initialised for the new object.
	*/
	std::cout << "Month key entered = ";
	std::cout << Labels::month_str.at (static_cast <unsigned int> (in_month) );
	std::cout << std::endl;
	std::cout << "Weekday key entered = ";
	std::cout << Labels::weekday_str.at (static_cast <unsigned int> (in_weekday) );
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Destructor.
*/
Labels::~Labels ()
{
	/*
		Notify the user that the Destructor has been called.
		Also display the memory location for the current object.
	*/
	std::cout << "Destructor called for object ";
	std::cout << this;
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Method to output the numeric indices for the respective enumeration keys.
*/
void Labels::output_code () const
{
	std::cout << "Calling output_code () method...";
	std::cout << std::endl;
	std::cout << "Object at location ";
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Output the numeric index.
		Use the std::underlying_type_t to get the numeric value for the enumeration key.
		Do this for both the month and weekday.
	*/
	std::cout << "Month code = ";
	std::cout << std::underlying_type_t <Month> (this->month);
	std::cout << std::endl;
	std::cout << "Weekday code = ";
	std::cout << std::underlying_type_t <Weekday> (this->weekday);
	std::cout << std::endl;
	std::cout << std::endl;
}

/*
	Method to output the labels for the respective enumeration keys.
*/
void Labels::output_label () const
{
	std::cout << "Calling output_label () method...";
	std::cout << std::endl;
	std::cout << "Object at location ";
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Output the label using the vector containers for storing the string labels for the months, and also that for the weekdays.
		The enumeration indices are consistent with the vector indices, so can be cross-referenced to get the label for the month and the weekday, respectively.
	*/
	std::cout << "Month label = ";
	std::cout << Labels::month_str.at (static_cast <unsigned int> (month) ); 
	std::cout << std::endl;
	std::cout << "Weekday label = ";
	std::cout << Labels::weekday_str.at (static_cast <unsigned int> (weekday) ); 
	std::cout << std::endl;
	std::cout << std::endl;
}

