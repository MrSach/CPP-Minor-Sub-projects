/**
 * @class Empty_String_Exception
 * @author Sacha
 * @date 29/06/22
 * @file Empty_String_Exception.hpp
 * @brief Empty String Exception object for the Empty String Exception
 */


/*
	Block Guards
*/
#pragma once
#ifndef EMPTY_STRING_EXCEPTION_HPP
#define EMPTY_STRING_EXCEPTION_HPP

class Empty_String_Exception
{
public:
	/*
		Methods
	*/
	
	/*
		Constructor.
		No exceptions.
	*/
	Empty_String_Exception () noexcept;
	
	/*
		Destructor.
		Virtual.
		No exceptions.
	*/
	virtual ~Empty_String_Exception () noexcept;
	
	/*
		Derived method, which is inherited from std::exception::what()
		Virtual.
		No exceptions.
	*/
	virtual const char * what () const noexcept;

};

/*
	End Block Guard.
*/
#endif // EMPTY_STRING_EXCEPTION_HPP
