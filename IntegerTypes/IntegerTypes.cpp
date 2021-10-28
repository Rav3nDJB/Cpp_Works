// IntegerTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>

using namespace std;

int main()
{

    cout << "Character Bit :" << CHAR_BIT << endl;
    cout << "Minimum signed Character Bit: " << SCHAR_MIN << endl;
    cout << "Maximum signed Character Bit: " << SCHAR_MAX << endl;
    cout << "Maximum unsigned Character Bit: " << UCHAR_MAX << endl;
    cout << "Minimum Character Bit: " << CHAR_MIN << endl;
    cout << "Maximum Character Bit: " << CHAR_MAX << endl;
    cout << "Multibyte Character: " << MB_LEN_MAX << endl;
    cout << "Minimum Short value: " << SHRT_MIN << endl;
    cout << "Maximum Short value: " << SHRT_MAX << endl;
    cout << "Maximum unsigned Short value: " << USHRT_MAX << endl;
    cout << "Minimum Integer: " << INT_MIN << endl;
    cout << "Maximun Integer: " << INT_MAX << endl;
    cout << "Maximun unsigned Integer: " << UINT_MAX << endl;
    cout << "Maximun unsigned Integer: " << UINT16_MAX << endl;
    cout << "Maximun unsigned Integer: " << UINT32_MAX << endl;
    cout << "Maximun unsigned Integer: " << UINT64_MAX << endl;
    cout << "Minimum Long: " << LONG_MIN << endl;
    cout << "Maximun Long: " << LONG_MAX << endl;
    cout << "Maximun unsigned Long: " << ULONG_MAX << endl;
    cout << "Minimum Long Long: " << LLONG_MIN << endl;
    cout << "Maximun Long Long: " << LLONG_MAX << endl;
    cout << "Maximun unsigned Long Long: " << ULLONG_MAX << endl;
    
    long int value = 23456432;
    cout << value << endl;
    short int sValue = 23434;
    cout << sValue << endl;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of char16: " << sizeof(char16_t) << endl; 
    cout << "Size of char32: " << sizeof(char32_t) << endl;
    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of long float: " << sizeof(long float) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;

    unsigned int usInt = 23434;
    signed int sInt = -23434;
    cout << "Unsigned Integer: " << usInt<<endl;
    cout << "Signed Integer: " << sInt<<endl;
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
