// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
	
using namespace std;

int main()
{
	int values[4];

	values[0] = 1;
	values[1] = 2;
	values[2] = 3;
	values[3] = 4;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;
	cout << values[3] << endl;

	double dValues[4] = { 4.256,58.114,596.87,669.5874 };
	for (int i = 0; i < 4; i++) {
		cout << "Index:"<< i<< " Array Value:" << dValues[i] << endl;
	}

	int NumberArray[8] = { };
	for (int i = 0; i < 4; i++) {
		cout << "Index:" << i << " Number Array Value:" << NumberArray[i] << endl;
	}

	string texts[] = {"Apple","Pie","Tart","Beer"};
	for (int i = 0; i < 4; i++) {
		cout << "Index: " << i << " String Array Value: " << texts[i] << endl;
	}

	for (int i = 1; i < 21; i++) {
		for (int j=1; j<21; j++) {
			cout << j << "x" << i << "=" << (j * i) << endl;
		}
	}

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
