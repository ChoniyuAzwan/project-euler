#include<iostream>
using namespace std;

main() {
    int i=133;
    while((i%6 != 0) || (i%35 != 0) || (i%133 !=0)) {
        i++;
    }
    cout << i;
}
