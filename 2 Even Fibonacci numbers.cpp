#include <iostream>
using namespace std;

int main() {
	int total = 0;

	//3 variables to create the Fibonacci sequence from 1 to X
	int one = 1;
	int two = 2;
	int three = 0;

	while (two <= 100)	{
		three = one + two;
		if (two % 2 == 0) {
			total += two;

			cout << two << "\t";
			cout << total << "\n";
        }
		one = two;
		two = three;
	}

	cout << total;

	return 0;
}
