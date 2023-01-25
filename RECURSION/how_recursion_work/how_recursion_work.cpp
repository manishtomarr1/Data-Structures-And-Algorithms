#include<iostream>
using namespace std;

void func2(int n);
int func(int a);

void func1(int n) {

	if (n > 0) { // terminated condition  for recursion
		cout << n << endl;
		func1(n - 1);// called recursion -> that function calling it self in the body.
		//also called tail recursion
	}

 }
int main() {
	cout << "enter value : " << endl;
	int a;
	cin >> a;
	
	cout << "\n==============func1============== <<" << endl;

	func1(a);

	cout << "\n==============func2============== <<" << endl;
	func2(a);

	cout << "\n================func===============" << endl;
	cout << func(a) << endl;;

	return 0;
}