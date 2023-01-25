#include<iostream>
using namespace std;
int main() {

	int a = 12;
	int& r = a; // we must initialized the reference variable at time of declearation .

	cout << a << endl;//12
	cout << r << endl;//12

	int c = 25;
	r = c; // we cannot change the reference variable again. -> this means that a=25;

	cout << a << endl; //25
	cout << r << endl;//25

	

	return 0;
}