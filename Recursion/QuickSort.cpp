#include "iostream"
using namespace std;

//Inplace : Cannot take extra space

int Partition(int *a, int s, int e) {

	int i = s - 1;
	int j = s;
	int pivot = a[e];

	for (; j <= e - 1;) {

		if (a[j] <= pivot) {
			i++;
			swap(a[i], a[j]);
		}
		j++;
	}

	swap(a[i + 1], a[e]);
	return (i + 1);
}

void QuickSort(int *a, int s, int e) {

	if (s >= e) return;

	// Partition Array;
	int p = Partition(a, s, e);

	QuickSort(a, s, p - 1);
	QuickSort(a, p + 1, e);
}

int main() {

	int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	QuickSort(a, 0, n - 1);

	cout << "Sorted Elements using quick Sort are: ";
	for (auto x : a) cout << x << " ";
	cout << endl;

	return 0;
}