#include <iostream>
#include <string.h>
using namespace std;

int balikkata (char kata[], int indeksKarakter){
    if (indeksKarakter==0){
        cout << kata[indeksKarakter];
        return kata[kata, indeksKarakter];
    }else {
        cout << kata[indeksKarakter];
        return balikkata(kata, indeksKarakter-1);
    }
}
int main(){
    char kata[80];
    int indeksKarakter;
    cout << "masukkan kata : ";
    cin.getline(kata, 80);
    indeksKarakter = strlen(kata)-1;
    balikkata(kata, indeksKarakter);
    cout << endl;
}
