// MultidimentionalArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using  namespace std;

int main()
{
	//string animals[2][3] = {
	//    {"Fox","Dog", "Cat"},
	//    {"Mouse", "Squirrel", "Parrot"}
	//};
	string animals[][3] = {
		{"Fox","Dog", "Cat"},
		{"Mouse", "Squirrel", "Parrot"}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << animals[i][j] << ", " << flush;
		}
		cout << endl;
	}

	int multiplicationTable[20][20];
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			int afterI, afterJ;
			afterI = (i + 1);
			afterJ = (j + 1);
			multiplicationTable[i][j]= afterI*afterJ;
			cout << afterI << "x" << afterJ << "=" << multiplicationTable[i][j] << ", " << endl;
		}
		cout << endl;
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
