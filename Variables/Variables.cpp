// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::string value = "Number of cats: ";
	std::string value0 = "New number of dogs: ";
	std::string value1 = "Number of animals: ";
	std::string value2 = "New dog acquired!\n";
	int numberCats = 5;
	int numberDogs = 7;
	int numberAnimals = numberDogs + numberCats;

	std::cout << value << numberCats << "\n";

	std::cout << value1 << numberAnimals << "\n";

	numberDogs += 2;
	numberDogs -= 1;
	std::cout << value2;
	std::cout << value0 << numberDogs << std::endl;

	std::string text1 = "Hello ";
	std::string text2 = "Don";

	std::string text3 = text1 + text2;

	std::cout << text1 << text2 << std::endl;

	std::cout << text3 << std:: endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
