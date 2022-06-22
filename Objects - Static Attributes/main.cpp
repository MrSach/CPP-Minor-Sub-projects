/*

	Program
		Objects - Static Attributes
	
	Description
		Terminal program.
		Demonstrates the use of a static member attribute that is shared across the class.
		In this case it is an integer attribute that monitors the number of instances that exist for that class.
		There is also an attribute to record the total instances that have been created and the number of instances that have been deleted.
	
	Author
		Sacha

	Date
		18.12.2021

*/

#include <iostream>

#include "obj3test.hpp"

/*
	Function - output static member attribute information for the test object.
	Also output memory locations where the static attributes are stored.
*/
void call_statics_objtest3 ()
{
	std::cout << "obj_count stored at memory address ";
	std::cout << obj3test::get_obj_count_address();
	std::cout << std::endl;
	
	std::cout << "obj_count = ";
	std::cout << obj3test::get_obj_count();
	std::cout << std::endl;
	
	std::cout << "obj_total stored at memory address ";
	std::cout << obj3test::get_obj_total_address();
	std::cout << std::endl;
	
	std::cout << "obj_total = ";
	std::cout << obj3test::get_obj_total();
	std::cout << std::endl;
	
	std::cout << "obj_deleted stored at memory address ";
	std::cout << obj3test::get_obj_deleted_address();
	std::cout << std::endl;
	
	std::cout << "obj_deleted = ";
	std::cout << obj3test::get_obj_deleted();
	std::cout << std::endl;
	
	std::cout << std::endl;
}

/*
	Main function
*/
int main (int argc, char * * argv)
{
	/*
		Title and line breaks.
	*/
	std::cout << "Objects - Static Attributes";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Output test object's static member attributes and memory locations for these attributes.
		This should show that 0 instances currently exist in memory.
		0 instances have been created in total.
		0 instances have been deleted.
	*/
	call_statics_objtest3 ();
	
	/*
		Constructor - No Arguments.
	*/
	obj3test obj_a;
	
	/*
		Notify user that an instance of this object has been created.
	*/
	std::cout << "Created obj_a";
	std::cout << std::endl;
	std::cout << "obj_a memory address = ";
	
	/*
		Output memory address of "obj_a".
	*/
	std::cout << & obj_a;
	std::cout << std::endl;
	std::cout << "obj_a obj_id memory address = ";
	
	/*
		Get the address for the ID attribute for instance "obj_a".
	*/
	std::cout << obj_a.get_obj_id_address ();
	std::cout << std::endl;
	std::cout << "obj_a obj_id value = ";
	
	/*
		Get the ID attribute for the instance "obj_a".
	*/
	std::cout << obj_a.get_obj_id ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Call the function to output the class attribute information again.
	*/
	call_statics_objtest3 ();
	
	/*
		Instantiate a pointer to "obj3test", "* obj_b".
		Dynamically allocate memory for this instance.
	*/
	obj3test * obj_b = new obj3test;
	std::cout << "Created * obj_b";
	std::cout << std::endl;
	
	/*
		Output object information.
	*/
	std::cout << "* obj_b memory address = ";
	std::cout << & obj_b;
	std::cout << std::endl;
	std::cout << "* obj_b pointer address = ";
	std::cout << obj_b;
	std::cout << std::endl;
	std::cout << "* obj_b obj_id memory address = ";
	std::cout << obj_b->get_obj_id_address ();
	std::cout << std::endl;
	std::cout << "* obj_b obj_id value = ";
	std::cout << obj_b->get_obj_id ();
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Output class static attribute information.
		This should reflect the changes now that a new instance has been created.
	*/
	call_statics_objtest3 ();
	
	/*
		Deallocate the memory from the pointer object.
	*/
	delete obj_b;
	std::cout << "Deleted *obj_b";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Output the current static member attributes for class "objtest3".
		This should show that 2 instances have been created in total, 1 is currently active, and 1 has been deleted.
	*/
	call_statics_objtest3 ();
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	return 0;
}
