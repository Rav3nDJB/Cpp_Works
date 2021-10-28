// Static.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Test {
private:
	int id;
	int index;

	static int count;
	static int counter;
public:
	static int const MAX = 99;
	static void showInfo() {
		cout << count << endl;
	}
	Test() { id = ++count; index = counter++; }
	int getId() { return id; }
	int getIndex() { return index; }
};

int Test::count = 0;
int Test::counter = 0;


int main()
{
	Test test1;
	cout << "Object 1 Index: " << test1.getIndex() << endl;
	cout << "Object 1 ID: "<<test1.getId() << endl;
	Test test2;
	cout << "Object 2 Index: " << test2.getIndex() << endl;
	cout << "Object 2 ID: " << test2.getId() << endl;
	cout << Test::MAX << endl;
	Test::showInfo();
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
