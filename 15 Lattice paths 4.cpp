#include <iostream>
using namespace std;

const int gridSize = 20;
long long paths = 1;

main() {
    for(int i = 0; i < gridSize; i++) {
        paths *= (2 * gridSize) - i;
        paths /= i + 1;
    }
    cout << paths << endl;
}
