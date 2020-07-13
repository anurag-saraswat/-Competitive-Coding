/*   Replace Bits in N by M
You are given two 32-bit numbers, N and M, and two bit positions, i and j.
Write a method to set all bits between i and j in N equal to M.
e.g., M becomes a substring of N located at i and startinng at j).
*/

#include <iostream>
using namespace std;

int clearRangeItoJ(int i, int j , int num) {
	int mask1 = -1 << (j + 1);
	int mask2 = (1 << (i)) - 1; // 2^n -1 concept;
	int mask = mask1 | mask2 ;
	return num & mask;
}

int replace(int n, int m, int i, int j) {

	int num = clearRangeItoJ(i, j, n);

	m = m << i;
	return num | m;


}

int main() {

	int n = 15;
	int i = 1, j = 3;
	int m = 2;

	cout << replace(n, m, i, j) << endl;

	return 0;
}