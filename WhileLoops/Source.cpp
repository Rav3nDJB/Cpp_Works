#include <iostream>

using namespace std;

int main() {

	int i = 5;

	while(i > 0)
	{
		cout << "Hello.\n";
		i -= 1;
	}

	while (i < 5)
	{
		cout << "Hi, Darling.\n";
		i += 1;
	}

	while (i > 0)
	{
		cout << "Hello.\n";
		i--;
	}

	while (i < 5)
	{
		cout << "Hi, Darling.\n";
		i++;
	}


	return 0;
}