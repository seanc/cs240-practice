#include <iostream>

using namespace std;

bool prime(int num) {
	bool isPrime = true;
	for (int j = 2; j < num; j++) {
		if (num % j == 0 && j != 1) {
			isPrime = false;
		}
	}

	return isPrime;
}


int main () {
	int num;
	for (int i = 0; i <= 10; i++) {
		cout << "Enter a number:\n";
		cin >> num;
		
		cout << prime(num)<< endl;
	}
}

