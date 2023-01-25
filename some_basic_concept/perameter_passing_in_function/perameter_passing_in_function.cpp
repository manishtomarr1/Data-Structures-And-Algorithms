#include<iostream>
using namespace std;

//pass by value
// in pass by value formal perameter(arrgument) does not effect acctual perameter.
//so the value is not changed or swap if we use pass by value.
void swap(int x, int y) {
	int temp{ 0 };
	temp = x;
	x = y;
	y = temp;
}

//pass by reference.
//in pass by reference formal perameter(arrgument) does effect acctual perameter.
//so the value is changed or swap if we use pass by reference.void swap(int x, int y) 
void swap(int *x, int *y) {
	int temp{ 0 };
	temp = *x;
	*x = *y;
	*y = temp;
}

//pass by address
//in pass by reference formal perameter(arrgument) does effect acctual perameter.
//so the value is changed or swap if we use pass by reference.
void swap_ad(int &x, int &y) {
	int temp{ 0 };
	temp = x;
	x = y;
	y = temp;
}

int main() {

	int a = 10;
	int b = 20;

	//pass by value.
	cout << "=====pass by value=====" << endl;
	cout << "before swaping a= " << a << " and b= " << b << endl;

	swap(a, b);

	cout << "after  swaping a= " << a << " and b= " << b << endl;

	//pass by reference.
	cout << "\n=====pass by reference=====" << endl;
	cout << "before swaping a= " << a << " and b= " << b << endl;

	swap(&a, &b);

	cout << "after  swaping a= " << a << " and b= " << b << endl;

	//pass by address
	//when we used pass by address monolithic programming is come in work. -> all work done by main function
	// because x and y is 'a' abd 'b'.
	cout << "\n=====pass by address=====" << endl;
	cout << "before swaping a= " << a << " and b= " << b << endl;

	swap_ad(a, b);

	cout << "after  swaping a= " << a << " and b= " << b << endl;

	return 0;
}
