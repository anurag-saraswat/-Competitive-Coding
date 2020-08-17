#include "iostream"
using namespace std;


void Merge(int *a, int s, int e) {

	int m = (s + e) / 2;
	int l = s;
	int r = m + 1;
	int i = s;
	int temp[100];

	while (l <= m and r <= e ) {
		if (a[l] > a[r]) temp[i++] = a[r++];
		else temp[i++] = a[l++];
	}

	while (l <= m) temp[i++] = a[l++];
	while (r <= e) temp[i++] = a[r++];

	for (int k = s; k <= e; k++)	a[k] = temp[k];

}

void mergeSort(int arr[], int s, int e) {

	if (s >= e) return; //Base Case

	int m = (s + e) / 2;

	mergeSort(arr, s, m);
	mergeSort(arr, m + 1, e);

	Merge(arr, s, e);
}


int main() {

	int arr[] = {9, 5, 22, 4, 8, 54, 6, 2, 4, 7, 1};
	int n = sizeof(arr) / sizeof(int);

	mergeSort(arr, 0, n - 1);


	cout << "Sorted Elements Are: ";
	for (auto x : arr) cout << x << " ";
	cout << endl;

	return 0;
}