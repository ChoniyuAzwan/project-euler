#include <iostream>

using namespace std;

int main() {
  long long n = 13195;

  for (long i=2; i*i < n; ++i) {
    while (n % i == 0) {
      cerr << "Factor found: " << i << endl;
      if (n>i) {
        n /= i;
      }
    }
  }
  cout << "Largest factor: " << n << endl;
}

