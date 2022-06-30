#include "Empty_String_Exception.hpp"

/*
	Constructor - default is sufficient.
*/
Empty_String_Exception::Empty_String_Exception () noexcept
{
	
}

/*
	Destructor - default is sufficient.
	Remember that this is a virtual function, meaning it can be derived with polymorphic advantages, such as for dynamic binding.
*/
Empty_String_Exception::~Empty_String_Exception () noexcept
{
	
}

/*
	The derived std::exception::what() function, overridden in order to enable a custom message for this exception object.
*/
const char * Empty_String_Exception::what () const noexcept
{
	return "Empty String Exception!";
}
