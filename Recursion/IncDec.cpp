#include "iostream"
using namespace std;


void decreasing(int n) {
	if (n == 0)return;
	cout << n << " ";
	decreasing(n - 1);
}

void increasing(int n) {
	if (n == 0)return;
	increasing(n - 1);
	cout << n << " ";
}

int main() {
	cout << "Incrasing: ";
	increasing(10);
	cout << endl;
	cout << "Decreasing: ";
	decreasing(10);
	cout << endl;

	return 0;
}