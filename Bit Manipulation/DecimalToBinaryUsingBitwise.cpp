#include "iostream"
using namespace std;

int Decimal2Binary(int n) {

	int p = 1;
	int bit;
	int val = 0;

	while (n > 0) {

		bit = n & 1;
		val += bit * p;

		p = p * 10;
		n = n >> 1;
	}
	return val;
}


int main() {

	cout << Decimal2Binary(16) << endl;
	return 0;

}