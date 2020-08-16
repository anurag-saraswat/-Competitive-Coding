// Inversion Count
// if(a[i] > a[j]) for every i<j
// 

#include "iostream"
using namespace std;

int Merge(int *a, int s, int e){

	int m = (s+e)/2;
    int l = s;
    int r = m+1;
    int i=s;
    int temp[10000];
    int count =0;
	while(l<=m and r<=e ){
		if(a[l]>a[r]){
			temp[i++]=a[r++];
			count = count+m-l+1;

		} 
		else temp[i++]=a[l++];
	}

	while(l<=m) temp[i++]=a[l++];
	while(r<=e) temp[i++]=a[r++];

	for (int k = s; k <=e; k++)	a[k]=temp[k];
	return count;	

}

int inversionCount(int *a ,int s, int e){

	int m = (s+e)/2;
	if(s>=e) return 0;

	int x = inversionCount(a,s,m);
	int y = inversionCount(a,m+1,e);
	int z = Merge(a,s,e);

	return (x+y+z);
}

int main(){

	int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);

    cout<<"Number of Inversions are: "<<inversionCount(a,0,n-1)<<endl;
    


	return 0;
}