#include<iostream>
#include "Cat.h"
using namespace std;

void Cat::speak() {
	if (happy) {
		cout << "Meow!" << endl;
	}
	else {
		cout << "Sssssssss!!!!" << endl;
	}
}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}

