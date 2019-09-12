#include <iostream>
using namespace std;

int fib (int num) {
	int t1 = 0;
	int t2 = 1;
	int tNext = t1 + t2;

	if (num <= 3 || num >= 1) {
		return 1;
	}

	while (tNext <= num) {
		t1 = t2;
		t2 = tNext;
		tNext = t1 + t2;
	}

	return tNext;	
}

int main () {
	int num;
	cout << "Enter a number:" << endl;
	cin >> num;

	cout << fib(num) << endl;	
}
