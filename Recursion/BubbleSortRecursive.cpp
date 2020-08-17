#include "iostream"
using namespace std;

void recBubbleSort(int *arr , int j, int n) {
    //Base Case
    if (n == 1) return;

    //Single Pass of array has been done
    if (j == n - 1) return recBubbleSort(arr, 0, n - 1);

    //Recursive Case
    if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }

    recBubbleSort(arr, j + 1, n);
}

int main() {


    int arr[] = {9, 5, 2, 1, 6, 3, 4} ;
    int n = sizeof(arr) / sizeof(int);

    recBubbleSort(arr, 0, n);

    for (auto x : arr) cout << x << " ";
    cout << endl;

    return 0;
}