#include<iostream>
using namespace std;

int sum(int n) {
	if (n > 0) {
		return n + sum(n - 1);
	}
	else
		return 0;
}

int main() {
	int a;
	cout << "enter number : ";
		cout << endl;
		cin >> a;

	cout << sum(a) << endl;

	return 0;
}
/*
* time complixity of this is O(n).
* we can also use loop for find sum of n natural number.
* insted using recursion and loop for finding sum of n natural number we can use the direct formula i.e n(n+1)/2.
*  
* int fun(int n){
* if (n>0)
* return n(n+1)/2;
* else 
* return 0;
* }
* 
* time complixity of this is O(1) -> constant so this is very fast.
*/