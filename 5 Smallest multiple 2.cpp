#include <iostream>
using namespace std;

main() {
	long i=1;
	bool status;

	while(status == false) {
        status = true;
		i++;
		for(int j=1; j<=20; j++) {
			if(i%j != 0) {
				status = false;
				break;
			}
		}
	}
	cout << i;
}


