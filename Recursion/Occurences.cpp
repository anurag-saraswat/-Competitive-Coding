#include "iostream"
using namespace std;


int firstOccurence(int *arr, int n, int ele) {

    //Base Cases
    if (n == 0) return -1;
    if (arr[0] == ele) return 0;

    // Recursive Case
    int i = firstOccurence(arr + 1, n - 1, ele);

    if (i == -1) return -1;
    else return i + 1;
}

// Different style of writing For loop

int linearSearch(int *arr , int i, int n , int ele ) {
    //Base Case
    if (i == n)return -1;
    if (arr[i] == ele)return i;

    //Recursive Case
    return linearSearch(arr, i + 1, n, ele);
}

int lastOccurence(int *arr , int n, int ele) {

    //Base Case
    if (n == 0) return -1;

    //Recursive Case
    int i = lastOccurence(arr + 1, n - 1, ele);

    if (i == -1) {
        if (arr[0] == ele) return 0;
        else return -1;
    }
    return i + 1;
}

void allOccurence(int *arr, int n, int i, int ele) {

    if (i == n)return;

    if (arr[i] == ele)cout << i << ", ";

    allOccurence(arr, n, i + 1, ele);
}

int main() {


    int arr[] = {1, 5, 2, 3, 6, 2, 9, 7, 2, 8};
    int n = sizeof(arr) / sizeof(int);

    int index = firstOccurence(arr, n, 2);
    cout << "First Occurence Index: " << index << endl;

    index = linearSearch(arr, 0, n, 9);
    cout << "First Occurence Index Using linear Search: " << index << endl;

    index = lastOccurence(arr, n, 2);
    cout << "Last Occurence Index: " << index << endl;

    cout << "All Occurence index are: ";
    allOccurence(arr, n, 0, 2);
    cout << endl;


    return 0;
}