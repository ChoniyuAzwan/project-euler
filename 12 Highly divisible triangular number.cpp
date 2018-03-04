#include <iostream>
#include <cmath>
#include<conio.h>
using namespace std;

int NumberOfDivisors(int number) {
    int nod = 0;
    int root = sqrt(number);

    for(int i=1; i<=root; i++){
        if(number % i == 0){
            nod += 2;
        }
    }
    //Correction if the number is a perfect square
    if (root * root == number) {
        nod--;
    }
    return nod;
}

main() {
	int number = 0;
	int i = 1;

	while(NumberOfDivisors(number) < 5000){
		// cout << "NumberOfDivisors = " << NumberOfDivisors(number) << "\t";
	    number += i;
	    // cout << "number = " << number << "\t";
        // cout << "i = " << i << endl;
	    i++;
	}
    cout << "number = " << number << "\t";
	//getche();
}
