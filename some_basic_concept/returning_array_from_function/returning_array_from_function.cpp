#include<iostream>
using namespace std;

int * func(int n) { // we also can use int [] func (int a) but many compilar not recognize that.
	int* p;

	p = new int[n]; 
	for (int i = 0; i < n; i++) {
		cout << "enter value at possition [" << i + 1 << "] : " << endl;
		cin >> p[i]; // because array name and a pointer name is same.
	}
	return (p);
}

int main() {
	int* a;

	cout << "enter the size of the array :" << endl;
	int b;
	cin >> b;
	a = func(b);
	
	cout << "\n[ ";
	for (int i = 0; i < b; i++) {
		cout << *a <<  " ";
		a++;
	}
	cout << "]" << endl;
	return 1;
}