#include <iostream>
using namespace std;

main() {
	int a=1, b=1, c, n=5, r=2;
	for(int i=n; i>(n-r); i--) {
		a *= i;
		cout << a << "\t";
	}
    cout << endl;
	for(int i=r; i>=1; i--) {
		b *= i;
		cout << b << "\t";
	}

	c = a/b;
	cout << endl << c;
}
