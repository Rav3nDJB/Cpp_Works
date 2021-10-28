#include <iostream>

using namespace std;

int main() {

	cout << "1.\tAdd new record. \n";
	cout << "2.\tDelete record. \n";
	cout << "3.\tView record. \n";
	cout << "4.\tSearch records. \n";
	cout << "5.\tQuit. \n";

	cout << "Enter your selection:> " << flush;

	int value;
	cin >> value;

	if (value == 5) {
		cout << "Application Quitting!";
	}
	else if (value == 4) {
		cout << "Search records?\n";
	}
	else if (value == 3) {
		cout << "View record?\n";
	}
	else if (value == 2) {
		cout << "Deleting record!\n";
	}
	else if (value == 1) {
		cout << "Adding new record...\n";
	}
	else {
		cout << "Invalid Selection..\n";
	}
	return 0;
}