#include<iostream>
using namespace std;

int func(int n) {
	static int a;

	if (n > 0) {
		a++;

		return func(n - 1) + a;
	}

	return 0;
}

int main() {

	int a = 5;

	cout << func(5) << endl;

	return 0;
}
/*
* if we pass any static variable in the recursive function so in returning phase every call is use the same copy.
* because there is single copy of x
* this is also same for global variable.
* like here a++ is done on each function call so the last value of a is used in the returning phase -> 5 is add every time.
*/