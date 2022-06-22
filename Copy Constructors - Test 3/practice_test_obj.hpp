/*
	Pragma
*/
#pragma once
/*
	Block Guards
*/
#ifndef COPY_CTOR_PRACTICE_TEST_3_HPP
#define COPY_CTOR_PRACTICE_TEST_3_HPP

/*
	"practice_test_obj" definition
*/
class practice_test_obj
{
private:
	int test_int_1;
	
public:
	/*
		Constructor - No-Arguments.
	*/
	practice_test_obj ();
	
	/*
		Destructor.
	*/
	~practice_test_obj ();
	
	/*
		Constructor - single integer argument.
	*/
	practice_test_obj (int arg_a);
	
	/*
		Copy Constructor.
	*/
	practice_test_obj (const practice_test_obj & source_obj); 

};

#endif
