#include<iostream>
using namespace std;

int fact(int n) {
	if (n > 0)
		return n * fact(n - 1);
	else
		return 1;
}

int main() {
	int a;
	cout << "enter number : " << endl;
	cin >> a;

	cout << "factorial of " << a << " is : ";
	cout << fact(a) << endl;;

	return 0;
}

// alternative approach
// int n = 1;
//   
//   int fact(int a) {
//   
//   	if (a > 0) {
//   		fact(a - 1);
//   		n *= a;
//   	}
//   	return n;
//   }