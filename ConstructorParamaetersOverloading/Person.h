#pragma once
#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person(): name("unnamed"), age(18){};
	Person(string name) : name(name), age(0) {}; /*this->name = name; this->age = 0;	cout << "Memory location of object: " << this << endl;*/
	Person(int age) : name("private"), age(age) {};
	Person(string name, int age) : name(name), age(age) {};

	string toString();
};

#endif // !PERSON_H_

