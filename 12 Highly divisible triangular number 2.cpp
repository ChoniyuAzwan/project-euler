#include <iostream>
#include<conio.h>
using namespace std;

main() {
	long divisor=0, i=1, triangle=0;
	while(divisor<400) {
		triangle += i;
		divisor = 0;
		for(long j=1; j<=triangle; j++) {
			if(triangle%j == 0) {
				divisor++;
			}
		}
		i++;
	}
	cout << triangle;
	getche();
}
