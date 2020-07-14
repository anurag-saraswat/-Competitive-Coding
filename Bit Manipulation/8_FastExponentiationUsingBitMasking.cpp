/*
   Complexity O(log(expo))

   logic: representing no as {

	       num ^(binary of exponent)

   }

*/


#include "iostream"
using namespace std;

int main() {

	int num = 4, expo = 3;

	int last_bit , res = 1;


	while (expo) {

		last_bit = expo & 1;

		if (last_bit) {
			res = res * num;
		}

		num = num * num;
		expo = expo >> 1;

	}

	cout << res << endl;



	return 0;
}