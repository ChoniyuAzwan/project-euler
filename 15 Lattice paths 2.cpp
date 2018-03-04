#include <iostream>
using namespace std;

int main() {
	int n, r, difmut, difcom, dif, mutation, divide, combination;

	cout << "Masukkan banyak keseluruhan data : ";
	cin >> n;
	cout << "Masukkan banyak data yang ingin di permutasikan : ";
	cin >> r;

    dif = n-r;
	difmut = n-1;
	mutation = n;
	difcom = r-1;
	divide = r;

	for (int i=difmut; i>dif; i--) {
		mutation *= i;
	}
	cout << endl << "Permutasi " << r << " dari " << n << " adalah " << mutation << endl;

    for(int i=difcom; i>=1; i--) {
        divide *= i;
    }

    combination = mutation/divide;

    cout << endl << "Kombinasi " << r << " dari " << n << " adalah " << combination << endl;
}
