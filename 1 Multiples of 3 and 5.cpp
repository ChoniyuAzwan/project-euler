#include<iostream>
using namespace std;

main() {
	int sum=0;
	for(int i=1; i<1000; i++) {
        if((i%3 == 0) || (i%5 == 0)) {
            sum += i;
            cout << sum << "\t";
        }
	}
}
