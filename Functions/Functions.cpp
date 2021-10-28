// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void showMenu() {
	cout << "1. Search\n";
	cout << "2. View record\n";
	cout << "3. Quit\n";
	cout << endl;
}

bool selection(int selectionValue) {
	switch (selectionValue)	{
	case 1:
		cout << "Searching...\n";
				return true;
		break;
	case 2:
		cout << "Viewing record!\n";
		return true;
		break;
	case 3:
		cout << "Quitting Application\n";
		return false;
		break;
	default:
		cout << "Invalid selection...\n";
		return true;
	}
}

int getInput() {
	cout << "Enter selection:>> " << flush;
	int selectionValue;
	cin >> selectionValue;
	return selectionValue;
}

bool inputMenu() {
	bool running = true;
	do	{
		showMenu();
		running = selection(getInput());
		cout << endl;
	} while (running);
	return running;
}

int main() {
	return inputMenu();
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
