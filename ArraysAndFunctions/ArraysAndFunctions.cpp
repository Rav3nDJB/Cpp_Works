// ArraysAndFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void show1(const int nElements, string texts[]) {
	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
	cout << endl;
}

void show2(const int nElements, string *texts) {
	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
	cout << endl;
}

void show3(string (&texts)[3]) {
	for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
		cout << texts[i] << endl;
	}
	cout << endl;
}

char* getMemory() {
	char* pMem = new char[10];
	cout << "Allocating Memory" << endl;
	return pMem;
}

void printMemory(char* pMem, int nElement) {
	for (int i = 0; i < nElement; i++) {
		cout << (int)&pMem[i] << ", " << (int)pMem[i] << ", " << &pMem[i] << ", " << pMem[i] << endl;
	}
}

void freeMemory(char* pMem) {
	cout << "Clearing Memory" << endl;
	delete[] pMem;
}
int main() {

	string texts[] = { "Apple", "Orange", "Banana" };
	show1(3, texts);
	show2(3, texts);
	show3(texts);
	char* pMemory = getMemory();
	printMemory(pMemory, 10);
	freeMemory(pMemory);
	
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
