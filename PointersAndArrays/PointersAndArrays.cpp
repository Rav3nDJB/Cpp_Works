// PointersAndArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string texts[] = {"one","two","three"};

    string* pTexts = texts;
    cout << sizeof(texts) / sizeof(string) << endl;

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
        cout << texts[i] << " " << flush;
    }
    cout << endl;
    
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
        cout << pTexts[i] << " " << flush;
    }
    cout << endl;
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
                cout << *pTexts << " " << flush;
                    }
    cout << endl;

    //string* pElement = texts;
    string* pElement = &texts[0];
    string* pEnd = &texts[2];

    while (true) {
        cout << *pElement << " " << flush;

        if (pElement == pEnd) {
            break;
        }
        pElement++;
    }
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
