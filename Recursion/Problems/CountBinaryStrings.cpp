/*
     Count Binary Strings
-----------------------------

   Count Binary Strings of Length of N, which have no consecutive ones?

    --Using DP
    --Approach Link : { https://www.geeksforgeeks.org/count-number-binary-strings-without-consecutive-1s/#:~:text=If%20we%20take%20a%20closer,number%20for%20n%20%3E%3D%201.&text=Therefore%20we%20can%20count%20the,consecutive%201s%20in%20binary%20representation. }

 */



#include "iostream"
using namespace std;

int BinaryStrings(int n) {

	int a[n], b[n];
	a[0] = b[0] = 1;

	for (int i = 1; i < n; i++) {

		a[i] = a[i - 1] + b[i - 1];
		b[i] = a[i - 1];

	}

	return a[n - 1] + b[n - 1];
}

int main() {

	int num = 3;

	cout << "Number of Binary Strings possible is: " << BinaryStrings(num) << endl;


	return 0;
}