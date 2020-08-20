#include "iostream"
using namespace std;


void TowerOfHanoi(int n, char src, char aux, char dest) {
	if (n == 0) return;

	TowerOfHanoi(n - 1, src, dest, aux);
	cout << "Shift Disk " << n << " from " << src << " to " << dest << endl;
	TowerOfHanoi(n - 1, aux, src, dest);
}


int main() {

	TowerOfHanoi(4, 'A', 'B', 'C');

	return 0;
}