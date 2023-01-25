#include<iostream>
using namespace std;


int find_power(int base, int exp) {

	int result = 1;
	int count = 0;

	while (count < exp) {

		result *= base;
		count++;
	}

	return result;
}

int main() {

	cout << find_power(2, 3) << endl;
	return 0;
}