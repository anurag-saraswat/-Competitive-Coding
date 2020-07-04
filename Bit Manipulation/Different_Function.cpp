//

#include <iostream>
using namespace std;


bool isOdd(int num) {
	if (num & 1 == 1) return true;
	else return false;
}

int setBit(int i, int num) {
	int mask = 1;
	mask = mask << i;
	return num | mask;
}

int getBit(int i, int num) {
	int mask = 1 << i;
	return (num & mask) ? 1 : 0;
}

int clearBit(int i, int num) {
	int mask = 1 << i;
	mask = ~mask;
	num = num & mask;
	return num;
}

int updateBit(int i, int num, int val) {
	num = clearBit(i , num);
	val = val << i;
	return num | val;
}


int main() {

	int num = 10;
	cout << isOdd(num) << endl;

	int index = 4;
	cout << setBit(index , num) << endl;

	index = 3;
	cout << getBit(index, num) << endl;

	index = 4;
	cout << clearBit(index, num) << endl;

	num = 11;
	index = 2;
	int val = 1;
	cout << updateBit(index, num, val) << endl;

	return 0;
}
