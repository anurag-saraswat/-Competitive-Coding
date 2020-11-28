

#include "iostream"
using namespace std;


void generate_subsequence(char *in, char *out, int i, int j) {
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	out[j] = in[i];
	//Including Current Character
	generate_subsequence(in, out, i + 1, j + 1);

	//Excluding Current Character
	generate_subsequence(in, out, i + 1, j);

}


int main() {

	char in[] = "12345";
	char out[10];

	generate_subsequence(in, out, 0, 0);


	return 0;
}