// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void changeSomethingRef(double &value) {
    value = 123.4;
}

void changeSomething(double value) {
    value = 123.4;
}

int main()
{
    int value1 = 8;
    int &value2 = value1;
    int value3 = value1;
    value2 = 10;
    value3 = 12;

    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;
    cout << "Value3: " << value3 << endl;

    double value = 4.321;
    changeSomething(value);
    cout << value << endl;

    value = 4.321;
    changeSomethingRef(value);
    cout << value << endl;

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
