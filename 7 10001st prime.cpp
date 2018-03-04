#include<iostream>
#include<math.h>
using namespace std;

//bilangan prima ke u
int bil, akar, u=99999, i, n;
bool tes;

int main() {
    //cout << "Masukkan urutan bilangan prima ke berapa = ";
    //cin >> u;

    long prima[u];

    bil=2;
    while(n != u) {
        tes = true;
        akar = sqrt(bil);


        for(i=2; i<=akar; i++) {
            if(bil%i == 0) {
                tes = false;
            }
        }

        if (tes==true) {
            prima[n] = bil;
            n += 1;
            cout << bil << "\t";
        }
        bil += 1;
    }
}
