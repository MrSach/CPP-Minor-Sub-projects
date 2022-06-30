#include "I_Output_Me.hpp"

/*
	Constructor.
*/
I_Output_Me::I_Output_Me ()
{
	
}

/*
	Destructor.
*/
I_Output_Me::~I_Output_Me ()
{
	
}

/*
	Operator Overload.
	Remember that this is actually not a member function, but this has been added to the I_Output_Me class source as the function parameter uses this object.
	Insertion Operator (<<).
*/
std::ostream & operator << (std::ostream & os, const I_Output_Me & obj)
{
	/*
		Call the Pure Virtual Function and pass in the output stream to allow overrides within derived classes.
	*/
	obj.output (os);
	return os;
}
