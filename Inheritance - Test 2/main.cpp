/*

	Program
		C++ Inheritance Test 2
	
	Description
		Defines a test object as a base class, then derives a new derived class using the base object.
		Instances of obj2, which is the derived class, are then declared, initialised and assigned 
	
	Author
		Sacha

	Date
		7.1.2022

*/

#include <iostream>
#include <utility>
#include "obj1.hpp"
#include "obj2.hpp"

/*
	Main function.
*/
int main (int argc, char * * argv)
{
	/*
		Title.
	*/
	std::cout << "Inheritance test 2";
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		obj1 No-Args Constructor example.
	*/
	obj1 a;
	a.show_number ();
	
	/*
		obj1 Constructor - single integer argument.
	*/
	obj1 b {22};
	b.show_number ();
	
	/*
		obj1 Copy Constructor example.
	*/
	obj1 c {b};
	c.show_number ();
	
	/*
		obj1 Move Constructor example.
	*/
	obj1 d {std::move (obj1 {55} ) };
	d.show_number ();
	
	/*
		Create an obj1 called "e".
		Pass a single integer value of 111 into the corresponding Constructor.
	*/
	obj1 e {111};
	
	/*
		Create another obj1 caled "f".
	*/
	obj1 f;
	
	/*
		obj1 Copy Assignment.
	*/
	f = e;
	f.show_number ();
	
	/*
		obj1 Move Assignment.
	*/
	obj1 g;
	g = obj1 {68};
	g.show_number ();
	
	/*
		obj2 No-Args Constructor example.
	*/ 
	obj2 h;
	
	/*
		Use obj1 show_number () method.
	*/
	h.obj1::show_number ();
	
	/*
		Use obj2 show_number2 () method.
	*/
	h.obj2::show_number2 ();
	
	/*
		Get the current object memory location.
		As all of these functions execute the same routine, the same output is displayed.
	*/
	std::cout << h.obj1::get_obj1 ();
	std::cout << std::endl;
	std::cout << h.obj2::get_obj2 ();
	std::cout << std::endl;
	std::cout << h.obj2::get_obj1 ();
	std::cout << std::endl;
	
	/*
		obj2 Constructor - single integer argument
	*/
	obj2 i {34};
	i.show_number ();
	i.show_number2 ();
	
	/*
		obj2 - Copy Constructor example.
	*/
	obj2 j {i};
	j.show_number ();
	j.show_number2 ();
	
	/*
		obj2 - Copy Assignment Example.
	*/
	obj2 k {123};
	obj2 l;
	l = k;
	l.show_number ();
	l.show_number2 ();
	
	/*
		obj2 - Move Assignment Example
	*/
	obj2 m { std::move ( obj2 {63} ) };
	m.show_number ();
	m.show_number2 ();
	
	/*
		obj2 - Move Assignment Example
	*/
	obj2 n;
	n = obj2 {271};
	n.show_number ();
	n.show_number2 ();
	
	/*
		Another obj2 No-Args Constructor example.
	*/
	obj2 o;
	
	/*
		Line breaks.
	*/
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		End of the program - automatic deallocation of stack-allocated memory.
	*/
	
	return 0;
}
