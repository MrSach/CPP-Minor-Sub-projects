/*

	Program
		Returning Lambda Expressions from Functions
	
	Description
		Terminal console program.
		Returns a lambda expression from an example function.
	
	Author
		Sacha

	Date
		7.2.2022, revised 28.5.2022

*/

#include <iostream>
#include <functional>

/*
	Declare std function.
	Name this "f1".
	Return type void.
	Single argument of type size_t.
*/
std::function <void (size_t)> f1 ()
{
	/*
		Define the lambda function itself.
	*/
	return
	
	/*
		Empty capture list as this is stateless.
	*/
	[]
	
	/*
		Parameter "x", type size_t
	*/
	(size_t x)
	{
		/*
			Loop starting at 0, then run 10 times.
		*/
		for (size_t i {0}; i < 10; ++i)
		{
			/*
				Output "Value: ", then the value of x, followed by a spacebar.
			*/
			std::cout << "Value: ";
			std::cout << x;
			std::cout << std::endl;
		}
	};
}

/*
	Main function.
*/
int main(int argc, char * * argv)
{
	std::cout << "Returning Lambda Expressions";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Instantiate the lambda function.
	*/
	std::function <void (size_t)> t1 {f1()};
	
	/*
		Declare and initialise a vector of size_t data type
	*/
	std::vector <size_t> v1 {1, 2, 6, 9};
	
	/*
		STL Algorithm function, pass in the lambda function as argument.
	*/
	std::for_each (v1.begin (), v1.end (), t1 );
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
