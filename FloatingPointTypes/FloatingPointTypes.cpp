// FloatingPointTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float value = 76.4;

    cout <<  value << endl;
    cout << scientific << value << endl;
    cout << fixed << value << endl;
    cout << setprecision(20) << scientific << value << endl;
    cout << setprecision(20) << fixed << value << endl;
  
    double dValue = 123.456789;
    cout << dValue << endl;
    cout << scientific << dValue << endl;
    cout << fixed << dValue << endl;
    cout << setprecision(20) << scientific << dValue << endl;
    cout << setprecision(20) << fixed << dValue << endl;

    long double lValue = 123.45678987654321;
    cout << lValue << endl;
    cout << scientific << lValue << endl;
    cout << fixed << lValue << endl;
    cout << setprecision(20) << scientific << lValue << endl;
    cout << setprecision(20) << fixed << lValue << endl;

    cout << "Size Of long double: " << sizeof(lValue) << endl;

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
