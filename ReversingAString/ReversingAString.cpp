// ReversingAString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char text[] = "hello";
    char text1[] = { 'h','e','l','l','o' };

    int nChars = sizeof(text) - 1;
    int nChars1 = sizeof(text1);

    char* pStart = text;
    char* pEnd = text + nChars - 1;
    
    char* pStart1 = text1;
    char* pEnd1 = text1 + nChars1;

    cout << *pEnd << endl;
    cout << *pEnd1 << endl;
    
    while (pStart < pEnd) {
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;

        pStart++;
        pEnd--;
    }
    cout << text << endl;

    while (pStart1 < pEnd1) {
        char save = *pStart1;
        *pStart1 = *pEnd1;
        *pEnd1 = save;

        pStart1++;
        pEnd1--;
    }
    cout << text1 << endl;

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
