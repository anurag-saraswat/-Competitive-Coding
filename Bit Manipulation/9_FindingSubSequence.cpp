/*
    Finding Subsequence/Subset of given String
    E.g.

    Input: "abc"
    Output: "", "a","b", "c", "ab", "ac", "bc", "abc"

*/

#include <iostream>
#include <cstring>
using namespace std;


void filterChar(char a[], int n) {

	int i = 0;
	while (n) {

		if (n & 1) {
			cout << a[i];
		}

		i++;
		n = n >> 1;
	}

	cout << endl;

}

void substring(char a[]) {

	int n = strlen(a);

	for (int i = 0; i < (1 << n); i++) {

		filterChar(a, i);
	}
}



int main() {

	char a[] = "abc";

	substring(a);


	return 0;
}
