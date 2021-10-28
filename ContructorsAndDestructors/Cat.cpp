#include <iostream>
#include "Cat.h"
using namespace std;

Cat::Cat() {
	cout << "Cat created.\n";
	happy = true;
}

Cat::~Cat() {
	cout << "Cat distroyed.\n";
}

void Cat::speak() {
	if (happy) {
		cout << "Meow!\n";
	}
	else {
		cout << "Sssssss!\n";
	}
}
