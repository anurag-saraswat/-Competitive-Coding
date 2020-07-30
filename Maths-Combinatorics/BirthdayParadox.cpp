/*
            Birthday Paradox Problem
-------------------------------------------------------

 What is the minimum number of people that should be present in a hall should be there's 50% chance of two people
 having same birthday?
 
 {if probability is 100% then (no. of days +1) persons should be present}

 Concept:

 let probability be p.
 probability all are different = x .
 p = 1-x


 */


#include <iostream>
using namespace std;

int main(){

	float x =1;//probability of 2 people having same birthday
	float p = 0.6;
	float num = 365;
	float denom = 365;
	float people = 0;

	if(p==1){
		cout<<"Min. no. of People is "<<366<<" for "<<" probability "<<1<<endl;
		exit(0);
	}
	

	while(x>(1-p)){
		x = x * (num)/denom;
		num--;
		people++;
		cout<<"Min. no. of People is "<<people<<" for "<<" probability "<<1-x<<endl;
		
		
	}

	cout<<people;


	return 0;
}