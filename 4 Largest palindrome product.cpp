4 s
#include<iostream>
using namespace std;

main() {
	long long n, num, digit, rev, palin=0, counter=1;
	for(int i=999; i>=100; i--) {
		for(int j=999; j>=i; j--) {
			num = n = i*j;
			rev = 0;

			if(num <= palin) {
                break;
			}

			do {
				digit = num % 10;
				rev = (rev * 10) + digit;
				num = num / 10;
			} while (num != 0);

			if ((n==rev) && (n>palin)) {
		        cout << "\n\ni=" << i << " j=" << j << "\n";
		    	cout << "result = [" << counter << "-" << n << "] \n\n";
		        palin = n;
			}
		    cout << "[" << counter << "-" << n << "] ";
		    counter++;
		}
	}
	cout << "result = [" << counter << "-" << n << "] \n\n";
}

