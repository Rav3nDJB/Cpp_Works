// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

void manipulate(int	&pValue) {
	cout << "2. Value of double in manipulate: " << &pValue << endl;
	pValue = 15;
	cout << "3. Value of double in manipulate: " << &pValue << endl;
}

void manipulate(double *pValue) {
	
	cout << "2. Value of double in manipulate: " << *pValue << endl;
	*pValue = 10.0;
	cout << "3. Value of double in manipulate: " << *pValue << endl;
};

int main()
{
	int& oValue();
	int nValue = 8;
	cout << "Integer Value: " << nValue<<endl;
	nValue = 9;
	cout << "Integer Value: " << nValue << endl;

	int* pnValue = &nValue;
	cout << "Integer Pointer Address: " << pnValue << endl;
	int& pnpValue = *pnValue;
	cout << "Integer Value via Pointer: " << *pnValue << endl;
	
	cout << ": " << pnpValue << endl;

	cout << "======================" << endl;
	double dValue = 123.4;
	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;
	cout << "======================" << endl;
	int& iValue(*pnValue);
	cout << "1. iValue: " << iValue << endl;
	manipulate(iValue);
	cout << "4. iValue: " << iValue << endl;
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
