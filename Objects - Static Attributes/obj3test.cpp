#include "obj3test.hpp"

/*
	Initialise static class attributes.
*/
unsigned long int obj3test::obj_count = 0;
unsigned long int obj3test::obj_total = 0;
unsigned long int obj3test::obj_deleted = 0;

/*
	Constructor - No Arguments
*/
obj3test::obj3test ()
:
	/*
		Initialise "obj_id" for the instance using the static variable "obj_count".
		This uses the number of currently active instances of the object.
		Alternatviely, the total number of instances declared since program runtime could also be used in order to ensure that each object instance will use a unique ID.
	*/
	obj_id {obj3test::obj_count}
{
	/*
		Each time the Constructor is called, increment the number of currently active instances.
		Also increment the total historic instances that have been created.
	*/
	++obj3test::obj_count;
	++obj3test::obj_total;
}

/*
	Destructor
*/
obj3test::~obj3test ()
{
	/*
		Decrement the number of active instances.
		Increment the number of instances that have been deleted.
	*/
	--obj3test::obj_count;
	++obj3test::obj_deleted;
}

/*
	Get the ID of the object instance.
*/
unsigned long int obj3test::get_obj_id ()
{
	return this->obj_id;
}

/*
	Get the memory address where the ID of the object instance is stored.
	This is output as a pointer.
*/
unsigned long int * obj3test::get_obj_id_address ()
{
	return & (this->obj_id);
}

/*
	Get static attribute for number of currently active instances. 
*/
unsigned long int obj3test::get_obj_count ()
{
	return obj3test::obj_count;
}

/*
	Get memory location for the static attribute for number of active object instances.
	Return as a pointer.
*/
unsigned long int * obj3test::get_obj_count_address ()
{
	return & (obj3test::obj_count);
}

/*
	Get static member attribute for the total number of object instances that have been created since the program was started.
*/
unsigned long int obj3test::get_obj_total ()
{
	return obj3test::obj_total;
}

/*
	Get memory location for the static member attribute for the total number of object instances created since runtime.
*/
unsigned long int * obj3test::get_obj_total_address ()
{
	return & (obj3test::obj_total);
}

/*
	Get the number of object instances that have been deleted since runtime.
	This is also a static member attribute.
*/
unsigned long int obj3test::get_obj_deleted ()
{
	return obj3test::obj_deleted;
}

/*
	Get the memory location for the static class attribute for the number of object instances that have been deleted since program runtime.
*/
unsigned long int * obj3test::get_obj_deleted_address ()
{
	return & (obj3test::obj_deleted);
}
