#include "iostream"
using namespace std;

int knapSac(int *profit, int *wt, int c, int n) {

	if (n == 0 or c == 0) return 0;

	int ans;
	int inc = 0, ex = 0;

	if (wt[n - 1] <= c) {
		inc = profit[n - 1] + knapSac(profit, wt, c - wt[n - 1], n - 1 );
	}

	ex = knapSac(profit, wt, c, n - 1 );

	ans = max(inc , ex);
	//cout << ans << " ";
	return ans;

}


int main() {

	int wt[] = {1, 2, 3, 5};
	int  profit[] = {40, 20, 30, 100};

	int capacity = 7;
	int items = sizeof(wt) / sizeof(int);


	cout << "Maximum Profit Achieve is: " << knapSac(profit, wt, capacity, items) << endl;


	return 0;
}