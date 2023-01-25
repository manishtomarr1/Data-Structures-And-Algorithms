#include<iostream>
using namespace std;

int main() {
	int a{ 10 };

	int* p = &a;

	//dereference pointer variable
	cout << *p << endl;

	//pointer to an array
	int arr[5] = { 1,2,3,4,5 };
	int* p1 = arr; //-> store the starting addres of array.

	// access the element of array through pointer.
	for (const auto& i : arr) {
		cout << *p1 << endl;
		p1++;
	}

	//create an array in the heap
	int* p2 = new int[5];
	for (int i = 0; i < 5; i++) {
		cout << "enter value : ";
		cin >> p2[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << p2[i] << endl;
		
	}

	// freeing heap memory
	delete [] p2;

	return 0;
}