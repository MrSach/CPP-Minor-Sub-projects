/*

	Program
		Joker Game Joke
	
	Description
		Terminal program.
		This is a joke program that always shows a pretentious joker card.
		The goal is to guess the card displayed.
		This is impossible to win as there is no way to guess the card correctly, no matter how hard you try.
		As a result, there is a guaranteed 100% lose rate.
		The program is designed as a practical joke, so avoid if you do not like programs that purposefully troll!
	
	Author
		Sacha

	Date
		21.1.2022

*/

#include <iostream>
#include <string>
#include <iomanip>

int main (int argc, char * * argv)
{
	/*
		Title and line breaks
	*/
	std::cout << "Welcome to the Joker Game - only joking!";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Prompt player with the main question...
	*/
	std::cout << "What card is this?";
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Start drawing joker card as ASCII art.
	*/
	std::cout << "***********";
	std::cout << std::endl;
	std::cout << std::setw(10) << std::left << "*";
	std::cout << "*";
	std::cout << std::endl;
	std::cout << std::setw(3) << std::left << "*";
	std::cout << "JOKER";
	std::cout << std::setw(3) << std::right << "*";
	std::cout << std::endl;
	std::cout << std::setw(10) << std::left << "*";
	std::cout << "*";
	std::cout << std::endl;
	std::cout << "***********";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Prepare for user input.
	*/
	std::string input {};
	std::cin >> input;
	std::cout << std::endl;
	std::cout << std::endl;
	
	/*
		Show output.
		This will always happen, regardless of user's input!
	*/
	std::cout << "IT'S A JOKER!";
	std::cout << std::endl;
	std::cout << "YOU LOSE!";
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
