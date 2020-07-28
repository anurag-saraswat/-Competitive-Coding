#include <iostream>
using namespace std;


void multiply(int *a, int &digit , int num) {

	int carry = 0;

	for (int i = 0; i < digit; i++) {

		int product = a[i] * num + carry;
		a[i] = product % 10;
		carry = product / 10;
	}
	while (carry) {
		a[digit] = carry % 10;
		carry = carry / 10;
		digit++;
	}


}

void large_Factorial(int num) {

	int max_digit = 100000;
	int *a = new int[max_digit];
	for (int i = 0; i < max_digit; i++) a[i] = 0;

	int digit = 1;
	a[0] = 1;

	for (int i = 1; i <= num; i++) {
		multiply(a, digit, i);
	}

	for (int i = digit - 1; i >= 0; i--) cout << a[i];
	cout << endl;
}



int main() {

	int num = 10;

	large_Factorial(10000);
	return 0 ;
}