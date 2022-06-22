/*
	Pragma and Block Guards.
*/

#pragma once
#ifndef CLASS_TEMPLATE_TEST_1
#define CLASS_TEMPLATE_TEST_1

#include <array>
#include <iostream>

/*
	Define the template with typename for the class and int for a specific data type
	CHECK IF EXAMPLE IS ALREADY COVERED BY THE UDEMY CPP COURSE
*/
template <typename A, int B>

/*
	Test array class - learn how to build templates with type-agnostic and numeric arguments.
*/
class TestMe
{
protected:
	/*
		Declare C++ STL Array - used to store data in template.
	*/
	std::array <A, B> val;
	
	/*
		Declare integer number, as given by template argument B.
	*/
	int no {B};
public:
	/*
		Default Constructor.
	*/
	TestMe () {};
	
	/*
		Constructor with parameter of type A.
	*/
	TestMe (A v1)
	{
		for (auto & item : val)
		{
			item = v1;
		}
	}
	
	/*
		Destructor.
	*/
	virtual ~TestMe () noexcept {};
	
	/*
		Less than operator, used for compatibility with STL Container, Iterator and Algorithm functions.
	*/
	virtual bool operator < (const TestMe & other) const
	{
		return (this->val < other.val);
	}
	
	/*
		Equality operator, also used for compatibility with STL functions.
	*/
	virtual bool operator == (const TestMe & other) const
	{
		return (this->val == other.val);
	}
	
	/*
		Index operator for element of type A.
	*/
	virtual A operator [] (const int & no) const
	{
		return this->val.at (no);
	}
	
	/*
		Display contents of the contained array.
	*/
	virtual void display (std::ostream & os) const
	{
		/*
			Loop through the array element by element.
		*/
		for (size_t i {0}; i < this->val.size (); ++i)
		{
			os << std::endl;
			os << this->val.at (i);
			os << " ";
		}
		os << std::endl;
	}
};

/*
	Insertion Operator - needs to be independent of the class.
	This is to enable the syntax to be used properly with std::cout.
	Example - std::cout << obj
*/
template <typename A, int B>
std::ostream & operator << (std::ostream & os, const TestMe <A, B> & obj)
{
	obj.display (os);
	return os;
}

#endif
