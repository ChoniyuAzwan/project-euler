#include<iostream>
using namespace std;

int reversed ;

int reverse(int n) {
	reversed = 0;
	while(n > 0) {
		reversed = (10*reversed) + (n%10);
		n = n/10;
	}
	return reversed;
}

int isPalindrome(int n) {
	n = reverse(n);
	return n;
}

main() {
	int largestPalindrome=0, a=999, b, counter=0;

	while(a>=100) {
		b = 999;
		while(b >= a) {
			if((a*b) <= largestPalindrome) {
				break; //Since a*b is always going to be too small
			}
			if(isPalindrome(a*b) && (a*b > largestPalindrome)) {
				largestPalindrome = a*b;
			}
			b--;
		}
		a--;
	}

	cout << counter << "-" << largestPalindrome << "  ";
	counter++;
}

