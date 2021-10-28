// AllocatingMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Animal
{
public:
	Animal() { cout << "Animal created." << endl; };
	Animal(const Animal& other) : name(other.name) { cout << "Animal created by copying." << endl; }
	~Animal() { cout << "Deconstructor called." << endl; };

	void setName(string name) { this->name = name; }
	void speak() const { cout << "My name is: " << name << endl; }
private:
	string name;
};

class Character {
private:
	string charName;
public:
	void setCharValue(char c) {
		charName = c;
	}
	void printChar() {
		cout << charName <<flush;
	}
};

int main(){

	int *pInt = new int;
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;

	Animal* pAnimal = new Animal;
	delete pAnimal;

	Animal* pAnimalArr = new Animal[10];
	pAnimalArr[5].setName("Jill");
	pAnimalArr[5].speak();
	delete [] pAnimalArr;

	char *pMem = new char[1000];
	delete [] pMem;

	char counterChar = 'a';
	char *alpha = new char[26];
	for (int i = 0; i < 26; i++, counterChar++) {
		alpha[i] = counterChar;
	}
	cout << alpha[3]<<flush;
	cout << alpha[14] << flush;
	cout << alpha[13] << flush;
	cout << alpha[13] << flush;
	cout << alpha[24] << endl;
	delete[] alpha;

	counterChar = 'a';
	Character *character = new Character[26];
	for (int i = 0; i < 26; i++, counterChar++) {
		character[i].setCharValue(counterChar);
	}
	character[3].printChar();
	character[14].printChar();
	character[13].printChar();
	character[13].printChar();
	character[24].printChar();

	delete[] character;

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
