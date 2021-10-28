// OtherTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Boolean" << endl;
    bool bValue = false;
    cout << bValue << endl;
    bValue = true;
    cout << bValue << endl;  
    cout << "\n" << endl;

    cout << "Charaters" << endl;
    cout << "Character 'g'" << endl;
    char cValue = 'g';
    cout << "'g': " << cValue << endl;
    cout << "Integer value of char: " << int(cValue) << endl;
    cout << "Decimal value of char 'g': " << float(cValue) << endl;
    cValue = float(103);
    cout << "Character of decimal value:103:: " << char(cValue) << endl;
    cout << "Integer value of decimal char:103:: " << int(cValue)<<endl;
    cValue = short(00000147);
    cout << "Character of short value:0000147:: " << char(cValue) << endl;
    cout << "Integer value of short char:0000147:: " << int(cValue) << endl;
    cValue = 0x067;
    cout << "Character of Hexadecimal value:0x067:: " << char(cValue) << endl;
    cout << "Integer value of Hexadecimal char:0x067:: " << int(cValue) << endl;

    cout << "Character '='" << endl;
    cValue = '=';
    cout << "'=': " << cValue << endl;
    cout << "Integer value of char: " << int(cValue) << endl;
    cout << "Decimal value of char '=': " << float(cValue) << endl;
    cValue = float(61);
    cout << "Character of decimal value:61:: " << char(cValue) << endl;
    cout << "Integer value of decimal char:61:: " << int(cValue) << endl;
    cValue = short(075);
    cout << "Character of short value:075:: " << char(cValue) << endl;
    cout << "Integer value of short char:075:: " << int(cValue) << endl;
    cValue = 0x03D;
    cout << "Character of Hexadecimal value:0x03D:: " << char(cValue) << endl;
    cout << "Integer value of Hexadecimal char:0x03D:: " << int(cValue) << endl;

    cout << "Character '!'" << endl;
    cValue = '!';
    cout << "Integer value of char: " << int(cValue) << endl;
    cout << "Decimal value of char '=': " << float(cValue) << endl;
    cValue = float(33);
    cout << "Character of decimal value:21:: " << char(cValue) << endl;
    cout << "Integer value of decimal char:21:: " << int(cValue) << endl;
    cValue = short(041);
    cout << "Character of short value:041:: " << char(cValue) << endl;
    cout << "Integer value of short char:041:: " << int(cValue) << endl;
    cValue = 0x021;
    cout << "Character of Hexadecimal value:0x021 " << char(cValue) << endl;
    cout << "Integer value of Hexadecimal char:0x021:: " << int(cValue) << endl;

    cout << "Character ' '" << endl;
    cValue = ' ';
    cout << "Integer value of char: " << int(cValue) << endl;
    cout << "Decimal value of char ' ': " << float(cValue) << endl;
    cValue = float(32);
    cout << "Character of decimal value:20:: " << char(cValue) << endl;
    cout << "Integer value of decimal char:20:: " << int(cValue) << endl;
    cValue = short(040);
    cout << "Character of short value:040:: " << char(cValue) << endl;
    cout << "Integer value of short char:040:: " << int(cValue) << endl;
    cValue = 0x020;
    cout << "Character of Hexadecimal value:0x020 " << char(cValue) << endl;
    cout << "Integer value of Hexadecimal char:0x020:: " << int(cValue) << endl;

    cout << "Size of char: " << sizeof(char) << endl;
    cout << "\n" << endl;


    wchar_t wValue = 'i';
    cout << wValue << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

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
