/*
	Block Guards.
*/
#pragma once
#ifndef LABELS_HPP
#define LABELS_HPP

#include <vector>
#include <string>

class Labels
{
public:
	/*
		Enumeration classes.
		Needed at public access because the parameters for Constructors require the full scoped enumeration keys to be passed as arguments from outside the "Labels" class.
		This gives the "Month" enumeration and the "Weekday" enumeration.
	*/
	enum class Month : unsigned int {Unknown = 0, January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12};
	enum class Weekday : unsigned int {Unknown = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7};
	
protected:
	/*
		Attributes.
		The month is an enum of "Month".
		The weekday is an enum of "Weekday".
		"month_str" is a container that holds strings for different valid entries for the month.
		"weekday_str" is a container that holds strings for different valid entries for the weekday.
		The static variables are assigned to be shared across the class because they are a class-wide resource.
	*/
	Month month;
	Weekday weekday;
	static std::vector <std::string> month_str;
	static std::vector <std::string> weekday_str;
	
public:
	/*
		Constructor - No Arguments.
	*/
	Labels ();
	
	/*
		Constructor - enumeration indices.
	*/
	Labels (const unsigned int in_month, const unsigned int in_weekday);
	
	/*
		Constructor - enumeration keys.
	*/
	Labels (const Month in_month, const Weekday in_weekday);
	
	/*
		Destructor.
	*/
	virtual ~ Labels ();
	
	/*
		Output the numeric index of the month and the weekday for the respective object.
	*/
	virtual void output_code () const;
	
	/*
		Output the label for the month and weekday for the respective object.
	*/
	virtual void output_label () const;
};

#endif // LABELS_HPP
