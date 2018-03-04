//51 detik
#include<iostream>
#include<math.h>
using namespace std;

int main() {
    long int bil, akar, bawah=1, atas=2000000, i, sum=0;
    bool tes;

    for (bil=bawah; bil<atas; bil++) {
        tes = true;
        akar = sqrt(bil);

        if (bil==1) {
            tes = false;
        }

        for(i=2; i<=akar; i++) {
            if(bil%i == 0) {
                tes = false;
            }
        }

        if (tes==true) {
            sum = sum+bil;
            cout << bil << "\t";
        }
    }

    cout << " \n" << sum << " \t";
}
