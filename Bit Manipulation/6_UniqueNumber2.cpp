/*
    1. Unique Number : 2N+2
    2. Every number is occuring twice except two numbers. Find the numbers??
*/

/*  Steps:

1. Finding xor of all the element (say store in res).
2. Find index of first set bit in res.(say set_bit_pos)
3. element1 is xor of all element having set_bit_pos as 1.
4. element2 is xor of res and element1.

*/


#include "iostream"
using namespace std;

int main() {

	int arr[] = {1, 2, 3, 12, 6, 3, 2, 1};

	int size = sizeof(arr) / sizeof(int);

	int res = 0;

	for (int i = 0; i < size; i++) {
		res = res ^ arr[i];
	}

	int temp = res;
	int set_bit_pos = 0;
	while (temp) {
		if (temp & 1) break;
		temp = temp >> 1;
		set_bit_pos++;
	}


	int ele1 = 0;
	for (int i = 0; i < size; i++) {
		if ( (arr[i] >> set_bit_pos) & 1)
			ele1 = ele1 ^ arr[i];
	}

	int ele2 = ele1 ^ res;

	cout << ele1 << " " << ele2 << endl;

	return 0;
}