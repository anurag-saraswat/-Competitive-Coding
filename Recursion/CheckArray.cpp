#include"iostream"
using namespace std;


bool isSorted(int arr[] , int n) {

	if (n == 0 or n == 1) return true;

	if ( (arr[0] < arr[1]) and isSorted(arr + 1 , n - 1)) return true;

	return false;

}


int main() {

	int arr[] = {2, 3, 5, 6, 8, 9,};
	int n = sizeof(arr) / sizeof(int);

	cout << isSorted(arr, n) << endl;

	return 0;
}