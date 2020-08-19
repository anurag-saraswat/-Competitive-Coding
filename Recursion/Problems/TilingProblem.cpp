/*
  Place The Tiles
 -----------------

 Given a wall of size 4*N, and tiles of size (1,4) and (4,1).
 In how many ways you can build the walls?

 */


#include "iostream"
using namespace std;


int fun(int N) {

	if (N < 4) return 1;

	return fun(N - 1) + fun(N - 4) ;
}

int main() {

	int N = 10;

	cout << "No of Ways are: " << fun(N) << endl;

	return 0;
}