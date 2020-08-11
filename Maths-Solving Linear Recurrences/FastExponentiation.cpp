// Time Complexity O(n)

#include "iostream"
using namespace std;


int FastExpo(int n,int p){

	if(p==0)return 1;

	int subprob = FastExpo(n,p/2);

	if(p&1) return n*subprob*subprob;

	else return subprob*subprob; 
}


int main(){

	int n,p;

	cin>>n>>p;
	cout<<FastExpo(n,p);

	return 0;
}