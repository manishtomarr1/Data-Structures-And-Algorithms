#include<iostream>
using namespace std;

int func(int n) {
	if (n > 100)
		return (n - 10);
	else
		return (func(func(n + 11))); // call recursivce call inside the recursive function.
}

int main() {
	int n = 95;

	cout << func(95) << endl;

	return 0;
}