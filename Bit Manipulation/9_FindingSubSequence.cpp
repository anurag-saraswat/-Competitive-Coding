/*
    Finding Subsequence/Subset of given String
    E.g.

    Input: "abc"
    Output: "", "a","b", "c", "ab", "ac", "bc", "abc"

*/

#include <iostream>
#include <cstring>
using namespace std;



void substring(char a[]) {

	int n = strlen(a);

	for (int i = 0; i < (1 << n); i++) {

		cout << i << endl;

	}
}



int main() {

	char a[] = "abc";

	substring(a);


	return 0;
}
