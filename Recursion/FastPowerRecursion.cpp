#include "iostream"
using namespace std;

int power(int num , int pow){

	if(pow==0)return 1;

	int ans = power(num,pow-1);
	ans = ans*num;
	return ans;
}

int fastPower(int num, int pow){
     
    if(pow == 0)return 1;

    int ans = fastPower(num, pow/2);
    ans = ans*ans;

    if(pow&1)return num*ans;
    
	return ans;
}


int main(){


	int num = 2;
	int pow = 10;

	cout<<"Power Using Naive Approach: "<<power(num,pow)<<endl;
    cout<<"Power Using Optimize Approach: "<<fastPower(num,pow)<<endl;

	return 0;
}