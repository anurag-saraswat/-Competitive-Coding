/*
     Friend Pairing Problem
--------------------------------
 Given N, friend who want to go to party on bikes.Each guy can go as single, or as a couple.
 Find the no of ways in which N friends can go to the party?

 N=3
 ways=4

 f(n) = 1*f(n-1) + (n-1)C1 * f(n-2)

 f(0)=f(1)=1
 f(2)=2
 */

#include "iostream"
using namespace std;

int pairing(int n) {

	if (n == 0 or n == 1) return 1;
	if (n == 2) return 2;

	return pairing(n - 1) + (n - 1) * pairing(n - 2);


	return 0;
}

int main() {

	int num = 3;

	cout << "No.of ways: " << pairing(num) << endl;


	return 0;
}