/*

 Ladder Problem
----------------

Standing at bottom and can take 1,2,3...n steps at a time.
Number of ways to reach top?

*/

#include "iostream"
using namespace std;

int ladder(int n, int step) {

	if (n == 0) return 1;
	if (n < 0) return 0;

	int ans = 0;

	for (int i = 1; i <= step; i++) {
		ans += ladder(n - i, step);
	}

	return ans;


}

int main() {

	int top = 4;
	int max_step = 3;

	cout << "Number of ways are: " << ladder(top, max_step) << endl;

}