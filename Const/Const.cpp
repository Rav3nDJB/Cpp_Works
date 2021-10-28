// Const.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Animal {
private:
	string name;
public:
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; };
};

int main()
{
	const double PI = 3.141592;
	// value = 10;
	cout << PI << endl;

	Animal animal;
	animal.setName("Danny");
	animal.speak();

	int value = 8;
	int* pValue = &value;
	//const int* pValue = &value;
	//int* const pValue = &value;

	cout << *pValue << endl;

	int number = 11;
	pValue = &number; //Error with this: int* const pValue = &value;
	//Example: Constant Pointer:: int* const (px) = &(x)
	//int* const pValue2 = &value;
	// pValue2 = &number;
	cout << *pValue << endl;

	*pValue = 12;  //Error with this: const int* pValue = &value;
	//Example: Constant Integer:: const int* (px) = &(x)
	//const int* pValue1 = &value;
	//*pValue1 = 12;
	cout << *pValue << endl;


	return 0;
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
