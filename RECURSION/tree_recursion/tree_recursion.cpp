#include<iostream>
using namespace std;
void func(int n) {
	if (n > 0) {
		cout << n << endl;

		func(n - 1);

		func(n - 1);
		//when recursive call occur more then one time in a recursive function that is called tree recursion.
	}
}

int main() {
	int a = 3;

	func(a);

	return 0;
}