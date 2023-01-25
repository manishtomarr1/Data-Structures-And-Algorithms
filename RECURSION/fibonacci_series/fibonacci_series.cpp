#include<iostream>
using namespace std;

int fib_loop(int m);

int ar[10]; // global array for momoization.

int fib(int n) {// this n is the number of term on that we have give the value of fibonacci series.

	if (n <= 1)
		return n;

	if (n > 1)
		return fib(n - 2) + fib(n - 1); // tree recursion

	}

//using memoization -> O(n)
// memoization is the method in which we store the value of function in array and reduce time complixity by
//using that function's value when need in recurcive calls again and again -> reduce excessive calls.

int fib_lesstime(int n){

if (n <= 1) {
    ar[n] = n;
	return n;
}

else {
	if (ar[n - 1] == -1)
		ar[n - 1] = fib_lesstime(n - 1);
	if (ar[n - 2] == -1)
		ar[n - 2] = fib_lesstime(n - 2);

	ar[n] = ar[n - 1] + ar[n - 2];
}

return ar[n - 1] + ar[n - 2];
}

int main() {

	int n = 10;

// simple method -> recursion
	cout << fib(n) << endl; // time complaxity -> O(2^n)

//iterative method
	cout << fib_loop(n) << endl; // time complixity -> O(n)

// memoization method -> time complixity O(n)

	for (int i = 0; i < 10; i++) {
		ar[i] = -1;
	}

	cout << fib_lesstime(n) << endl;

	return 0;
}