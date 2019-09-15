#include <iostream>
using namespace std;

int fib (int n) {
	int t1 = 0;
	int t2 = 1;
	int tNext = t1 + t2;

	int count = 1;

	if (n == 1) return 0;

	while (count <= n) {
		if (count > 3) {
			t1 = t2;
			t2 = tNext;
		}
		tNext = t1 + t2;
		count++;
	}

	return tNext;	
}

int main () {
	int num;
	cout << "Enter a number:" << endl;
	cin >> num;

	cout << fib(num) << endl;	
}
