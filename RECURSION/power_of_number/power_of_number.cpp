#include<iostream>
using namespace std;
  int total;
  
  int power(int base, int exp) {
  	if (exp > 0)
  		return power(base, exp - 1) * base;
  	
  	else 
  		return 1;
  
  }

//using loop -> time complixity O(n)

int pow(int base, int exp) {
	int tot=1;
	if (exp > 0) {
		for (int i = 1; i <= exp; i++) {
			tot *= base;
		}

		return tot;
	}
	else return 1;
}

// with less time complixity using recursion.

int powr(int base, int exp) {
	if (exp == 0)
		return 1;
	if (exp % 2 == 0)
		return powr(base * base, exp / 2);
	else 
		return base * powr(base * base, (exp - 1) / 2);
}

int main() {

	//cout << power(2,5) << endl;

	cout << powr(2, 8) << endl;

	return 0;
}