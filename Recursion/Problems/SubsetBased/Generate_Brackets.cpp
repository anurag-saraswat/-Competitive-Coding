//Generate Balance Brackets using N pairs of Round Brackets


#include "iostream"
using namespace std;

void generateBrackets(char *out, int n, int open, int closed, int indx) {

	if (indx == 2 * n) {
		out[indx] = '\0';
		cout << out << endl;
		return;
	}

	if (open < n) {
		out[indx] = '(';
		generateBrackets(out, n, open + 1, closed, indx + 1);
	}

	if (closed < open) {
		out[indx] = ')';
		generateBrackets(out, n, open, closed + 1, indx + 1);
	}
}


int main() {

	int num = 4;
	char out[200];

	generateBrackets(out, num, 0, 0, 0);

	return 0;
}