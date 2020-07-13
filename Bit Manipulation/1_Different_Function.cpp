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

int clearLastBits(int index , int num) {
	int mask = -1 << index;
	return num & mask;
}

int clearRangeItoJ(int i, int j , int num) {

	int mask1 = -1 << (j);

	int mask2 = (1 << (i - 1)) - 1; // 2^n -1 concept;

	int mask = mask1 | mask2 ;

	return num & mask;
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

	num = 127;
	index = 4;
	cout << clearLastBits(index, num) << endl;

	num = 127;
	int i = 3;
	int j = 6;
	cout << clearRangeItoJ(i, j, num) << endl;

	return 0;
}
