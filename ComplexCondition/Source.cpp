#include<iostream>

using namespace std;
/*
	== equality test
	!= Not equals
	< Less Than
	> More Than
	<= Less than or equals
	>= More than or equals

*/

int main() {
	int value = 7;
	int value0 = 4;

	if (value >= 5) {
		cout << "Condition 1: true\n";
	}
	else {
		cout << "Condition 1: false\n";
	}
	if (value == 7 && value0 < 3) {
		cout << "Condition 2: true\n";
	}
	else {
		cout << "Condition 2: false\n";
	}
	if (value == 7 || value0 < 3) {
		cout << "Condition 3: true\n";
	}
	else {
		cout << "Condition 3: false\n";
	}
	if ((value0 != 8 && value == 10) || value<10) {
		cout << "Condition 4: true\n";
	}
	else {
		cout << "Condition 4: false\n";
	}
	bool Condition1 = ((value != 8) && (value0 == 10));
	bool Condition2 = (value0 < 10);
	if (Condition1 || Condition2) {
		cout << "Condition 5: true\n";
	}
	else {
		cout << "Condition 5: false\n";
	}
}