// NewOperator.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

Animal createAnimal() {
	Animal a;
	a.setName("Danny");
	return a;
}

Animal *createAnimal1() {
	Animal* a = new Animal();
	a->setName("Jack");
	return a;
}

Animal& createAnimal2() {
	Animal a;
	a.setName("Paul");
	a.speak();
	return a;
}

int main()
{
	//Animal *pCat = new Animal();

	//pCat->setName("Jack");
	//pCat->speak();
	//(*pCat).setName("Fred");
	//(*pCat).speak();
	
	//delete pCat;
	
	//cout << sizeof(pCat) << endl;
	
	Animal frog = createAnimal();
	frog.speak();

	Animal* frog1 = createAnimal1();
	frog1->speak();
	delete	frog1;

	Animal& frog2 = createAnimal2();
	frog2.speak();
	
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
