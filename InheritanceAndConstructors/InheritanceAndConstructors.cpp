// InheritanceAndConstructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Machine{
private:
    int id;
public:
        Machine(): id(0) { cout << "Machine no-argument constructor called." << endl; }
        Machine(int id) : id(id) { cout << "Machine parameterized contructor called"; }
    void info() { cout << "ID: " << id << endl; }
};

class Vechile: public Machine {
public:
        Vechile() { cout << "Vechile no-argument constructor called." << endl; }
        Vechile(int id) : Machine(id) { cout << "Vechile parameterized contructor called" << endl; }
};

class Car : public Vechile {
public:
    Car() :Vechile(999) { cout << "Car no-argument construstor called."; }
};

int main()
{
    Vechile vechile;
    vechile.info();

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
