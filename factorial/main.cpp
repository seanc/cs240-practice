#include <iostream>

using namespace std;

int factorial (int n) {
  int total = 1;
  
  for (int i = 1; i <= n; i++) {
    total *= i;
  }

  return total;
}

int main () {
  int n;
  cout << "Enter a number:" << endl;
  cin >> n;
  cout << n << "! = " << factorial(n) << endl;
}