#include "iostream"
using namespace std;

void recBubbleSort(int *arr , int j, int n){
	
	if(n==1) return;
	
}

int main(){


	int arr[] = {9,5,2,1,6,3,4} ;
	int n = sizeof(arr)/sizeof(int);

	recBubbleSort(arr,0,n);
    
    for(auto x:arr) cout<<x<<" ";

    cout<<endl;

	return 0;
}