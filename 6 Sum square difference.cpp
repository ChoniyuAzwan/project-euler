#include<iostream>
using namespace std;

main() {
    int square=0, sumSquare=0, squareSum=0;
    for(int i=1; i<=100; i++) {
        sumSquare = sumSquare + i*i;
        squareSum = squareSum+i;
    }
    cout << "sum of the squares = " << sumSquare << " \n";
    cout << "square of the sum = " << squareSum*squareSum << " \n";
    cout << "difference between of both = " << squareSum*squareSum - sumSquare << endl;
}
