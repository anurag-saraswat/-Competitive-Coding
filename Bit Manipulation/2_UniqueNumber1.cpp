/*
    1. Unique Number : 2N+1
    2. Every number is occuring twice except one. Find that number??
*/

#include <iostream>
using namespace std;

int main() {

	int n;
	int m;
	int ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;
		ans = ans ^ m;
	}

	cout << ans << endl;

	return 0;
}