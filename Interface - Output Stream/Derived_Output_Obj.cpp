#include "Derived_Output_Obj.hpp"

/*
	Constructor.
*/
Derived_Output_Obj::Derived_Output_Obj ()
{
	
}

/*
	Destructor.
*/
Derived_Output_Obj::~Derived_Output_Obj ()
{
	
}

/*
	Output method.
*/
void Derived_Output_Obj::output (std::ostream & os) const
{
	/*
		Use the overloaded insertion operator to output the message that a Derived_Output_Obj has been output through the output stream.
	*/
	os << "Derived Output Object!";
	os << std::endl;
}
