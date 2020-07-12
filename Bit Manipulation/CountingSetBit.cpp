#include <iostream>
using namespace std;

// Method 1

int setBit(int num) {
	int count = 0;
	while (num > 0) {
		count += num & 1;
		num = num >> 1;
	}
	return count;
}


// Method 2

int setBitOptimize(int num) {
	int count = 0;
	while (num > 0) {
		num = num & (num - 1);
		count ++;
	}
	return count;
}

int main() {
	cout << setBit(15) << endl;
	cout << setBitOptimize(15) << endl;

	// Method 3 { Using in built function }
	cout << __builtin_popcount(15) << endl;
	return 0;
}