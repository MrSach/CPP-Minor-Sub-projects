/*
	Include common libraries.
*/
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>


/*
	Include the header file for the class.
*/
#include "Stateful_Obj.hpp"

/*
	Constructor - single vector container parameter of type int.
	Read-only parameter.
*/
Stateful_Obj::Stateful_Obj (const std::vector <int> & v)
:
	/*
		Initialise "numbers" to the values provided by the parameter.
	*/
	numbers {v}
{
	
}

/*
	Destructor.
*/
Stateful_Obj::~Stateful_Obj ()
{
	
}

/*
	Display the "numbers" list.
	Read-only method.
*/
void Stateful_Obj :: display_numbers () const
{
	/*
		Notify user that the list for the "numbers" attribute is being generated for output.
	*/
	std::cout << "Outputting entries for object ";
	
	/*
		Output memory location for current object.
	*/
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Loop through the "numbers" Container with the std::for_each STL Algorithm function.
	*/
	std::for_each
	(
		/*
			Begin STL Iterator at the first element of "numbers".
			End at the last.
		*/
		numbers.begin (),
		numbers.end (),
		
		/*
			Stateless void lambda function.
			Empty Capture List used as no environment variables are needed here.
		*/
		[]
		(int x)
		-> void
		{
			/*
				Output the current element, followed by a line break.
			*/
			std::cout << x;
			std::cout << std::endl;
		}
	);
	
	/*
		Add another line break afterwards to tidy trailing space.
	*/
	std::cout << std::endl;
}

/*
	Generate sorted list of unique values for "numbers".
	This generates a new list that has been filtered and processed.
	The method returns a new list, but does not change the existing list!
*/
std::vector <int> Stateful_Obj::uniques ()
{
	/*
		Notify user that the method to generate a filtered list of the "numbers" attribute has been called.
	*/
	std::cout << "Generating sorted list of unique numbers for object at memory location ";
	
	/*
		Output memory location for current object instance.
	*/
	std::cout << this;
	std::cout << std::endl;
	
	/*
		Declare a new vector.
		This contains a vector of type int.
		Initialise as empty.
	*/
	std::vector <int> buffer {};
	
	/*
		Loop through "numbers" vector and add each item to the "buffer" vector.
		This protects the original member attribute for the current object.
	*/
	std::for_each
	(
		/*
			Start at the first element in "numbers", end with the last.
		*/
		numbers.begin(),
		numbers.end(),
		
		/*
			Pass in "buffer" by reference as this needs to be written to and for the changes to persist after the lambda function.
		*/
		[& buffer]
		
		/*
			Integer values are passed through from the STL Container.
		*/
		(int x)
		{
			/*
				Add value as an element to the "buffer" container.
			*/
			buffer.push_back (x);
		}
	);
	
	/*
		Sort the new "buffer" container elements by numeric value, from beginning to end.
		Elements of the same value will be adjacent to each other.
	*/
	std::sort
	(
		buffer.begin(),
		buffer.end()
	);
	
	/*
		Declare a new STL Iterator,
		Initialise to the first element of "buffer".
		This serves the purpose of checking the previous value before the current item in the std::remove_if Algorithm, and is passed as an environment variable in the capture list.
	*/
	std::vector <int> :: iterator it {buffer.begin()};
	
	/*
		Boolean for checking if the first iteration has passed yet.
		The default value is true, so the loop assumes that it is the first iteration, until the flag is assigned to be false just before the first iteration completes.
	*/
	bool first_loop {1};
	
	/*
		The remove_if algorithm realigns the container iterators, but does not delete the elements.
		Any elements found to be true for the predicate value will simply no longer be linked to the sequence of elements, but the vector will remain its original size.
		Using the std::vector::erase() command will delete the elements that meet the criteria to be erased and the vector is resized.
	*/
	buffer.erase
	(
		/*
			remove_if command.
		*/
		std::remove_if
		(
			/*
				Start at the first element of "buffer", end at last element.
			*/
			buffer.begin(),
			buffer.end(),
			
			/*
				Capture list.
				Stateful Lambda Function.
				& it captures the reference of the iterator.
				This allows the variable to be captured directly and written to.
				As the current element needs to be compared against the previous element, the iterator needs to be able to change such that it is always pointing to the previous item in the container compared with the STD Algorithm (the local variable "x" in this case).
				& buffer needs to be accessed because it needs to be read from within the lambda function.
				As this is an STL Container variable, copying by value may incur significant data overhead.
				Using a reference means that the variable can be accessed directly without needing to be copied.
				& first loop is the boolean check flag that determines whether to ignore action for the first iteration.
				As this will need to be reassigned to false after the first iteration, this is also passed as a reference to the lambda function.
			*/
			[& it, & buffer, & first_loop]
			
			/*
				Cycle through elements and pass parameter as an integer, "x".
			*/
			(int x)
			{
				/*
					Tidy with line break.
				*/
				std::cout << std::endl;
				
				/*
					Output the value of "x" to the output stream.
				*/
				std::cout << "x = " << x;
				std::cout << std::endl;
				
				/*
					Output the value of * it, which should be the value of the previous element in the container.
					Where there are duplicates, "x" and "* it" will give the same value in one iteration.
				*/
				std::cout << "* it = " << * it;
				std::cout << std::endl;
				
				/*
					If the iterator to the previous value is at the beginning of the container, which is the first element, enter the condition.
				*/
				if (it == buffer.begin ())
				{
					/*
						Notify user that the iterator still points to the first element of the vector.
					*/
					std::cout << "Iterator is the same as the start of the vector.";
					std::cout << std::endl;
					
					/*
						Check if this is the first iteration, ignore if so.
						This first loop is necessary in order to avoid causing out of range errors for containers only occupied by one live element.
					*/
					if (first_loop == 1)
					{
						/*
							Just before the end of the first iteration, set the boolean flag to false so that further iterations will allow the trailing iterator "* it" to progress from the next iteration.
						*/
						first_loop = 0;
						
						/*
							Return false as the element "x" and "* it" are pointing to the same element, so no need to adjust elements within the container.
						*/
						return false;
					}
				}
				
				/*
					After the first iteration...
					Check if the current element's value, "x", matches the value from the trailing iterator, "* it". 
				*/
				if (* it == x)
				{
					/*
						As the values match, the element at "x" in the container is flagged to be bypassed as an element in the conatiner series.
						So, the vector element is not deleted, but "x" will be skipped in the vector so that it will no longer be pointed to.
					*/
					std::cout << "Duplicate found, deleting...";
					std::cout << std::endl;
					
					/*
						As a duplicate has been found, return true so that the current element, "x", in the container, "buffer", will get bypassed by the container's series of elements.
					*/
					return true;
				}
				/*
					The default routine applies:
					-After the first iteration.
					-If no duplicate value has been found.
					Increment "* it" so that it points to element "x".
					"x" will automatically be reassigned to the next element in the container from the next iteration until the end of the container is reached.
				*/
				++ it;
				
				/*
					Return false as no duplicate was found this time.
				*/
				return false;
			}
		),
	/*
		Set the limit to be at the end of the "buffer" container, which is the last element.
		This applies to the buffer.erase() method's second argument.
	*/
	buffer.end()
	);
	
	/*
		Notify user that the processed list has been generated.
	*/
	std::cout << "Finished generating sorted unique list...";
	std::cout << std::endl;
	
	/*
		Return the new vector.
		Note that no existing member attribute for the current object has been changed.
		To store the changes, a new vector needs to be created and initialised/assigned the ouptut from the Stateful_Obj::uniques () method for the current object.
	*/
	return buffer;
}
