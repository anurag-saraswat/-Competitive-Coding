/*
    1. Unique Number : 3N+1
    2. Every number is occuring thrice except one number. Find the number??
*/

/*  Steps:

     1. Take a Count array which will represent sum of set bits in all numbers at that position.
     2. Traverse each no. bit wise and if bit is set then increment count value at that position.
     3. Take modulus of count array with three.
     4. Convert count array to decimal value which is answer.


*/

#include <iostream>
using namespace std;


int main() {

	int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4, 4, 2044};

	int count[20] = {0};
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {

		int j = 0;
		while (arr[i]) {
			count[j] = count[j] + (arr[i] & 1);
			arr[i] = arr[i] >> 1;
			j++;
		}
	}

	for (int i = 0; i < 20; i++) {
		count[i] = count[i] % 3;
	}

	int power = 1, ans = 0;

	for (int i = 0; i < 20; i++) {
		ans = ans + count[i] * power;
		power = power * 2;
	}

	cout << ans << endl;

	return 0;
}
