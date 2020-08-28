#include "iostream"
using namespace std;

char keypad[][10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void phoneKeypad(char *in, char *out, int i, int j) {
	//Base Case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	//Recursive Case
	int digit = in[i] - '0';

	for (int k = 0; keypad[digit][k] != '\0'; k++) {

		out[j] = keypad[digit][k];

		//Fill Remaining
		phoneKeypad(in, out, i + 1, j + 1);
	}

}

int main() {

	char in[] = "64";
	char out[100];

	phoneKeypad(in, out, 0, 0);

	return 0;
}