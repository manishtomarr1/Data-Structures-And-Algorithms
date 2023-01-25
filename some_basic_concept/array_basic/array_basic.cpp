#include<iostream>
using namespace std;

int main() {
	int arr[7]{ 1,2,3,4,5 };

	//what is the value of uninitialized index in an array -> '0'.
	cout << "[ ";
	for (const auto& i : arr)
		cout << i << " ";
	cout << "]" << endl;
	                               
	//sizeof an integer array-> 4 byte each element.
	cout << "size of array is " << sizeof(arr) << " byte" << endl;

	//users desire array-> we can create but not initialized at time of declare, it take garbaze value before initialization.
	int s;
	cout << "Enter size : " << endl;
	cin >> s;
	//int arr1[s]; // in visual studio we cannot do so.

	return 0;
}