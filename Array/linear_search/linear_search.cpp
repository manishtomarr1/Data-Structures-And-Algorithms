#include<iostream>
#include<algorithm>
using namespace std;

class arr {

	int size;
	int lenght;
	int* array_pointer = new int[size];

public:

	void get(int s, int l) {
		size = s;
		lenght = l;
		cout << "size :" << size << endl;
		cout << "lenght :" << lenght << endl;
	}

	void insert() {

		for (int i = 0; i < lenght; i++) {
			cout << "enter element [" << i + 1 << "] : ";
			cin >> array_pointer[i];
		}
	}

	void display() {
		cout << "\n[ ";
		for (int i = 0; i < lenght; i++) {
			cout << array_pointer[i] << " ";
		}
		cout << "]" << endl;
	}

	int linear_search() {
		int key;
		cout << "\nenter the element to found : ";
		cin >> key;
		cout << endl;
		for (int i = 0; i < lenght; i++) {
			if (array_pointer[i] == key) {
				cout << key << " found at index : ";
				return i;
			}
		}
		return -1;
	}

	int transposition_in_linear_search() {
		cout << "\ntransposition_in_linear_search" << endl;
		int key;
		cout << "enter the element to found : ";
		cin >> key;
		cout << endl;
		for (int i = 0; i < lenght; i++) {
			if (array_pointer[i] == key) {
				swap(array_pointer[i], array_pointer[i - 1]);// swap the element with previous element
				cout << key << " found at index : ";
				return i-1;
			}
		}
		return -1;
	}

	int move_to_front_linear_search() {
		cout << "\nmove_to_front_linear_search" << endl;
		int key;
		cout << "enter the element to found : ";
		cin >> key;
		cout << endl;
		for (int i = 0; i < lenght; i++) {
			if (array_pointer[i] == key) {
				swap(array_pointer[i], array_pointer[0]); // swap the element with first element.
				cout <<key << " found at index : ";
				return 0;
			}
		}
		return -1;
	}
};
int main() {

	arr a1;
	a1.get(5,5);
	a1.insert();
	a1.display();
	cout << a1.linear_search() << endl;;
	cout << a1.transposition_in_linear_search() << endl;
	cout << a1.move_to_front_linear_search() << endl;
	a1.display();

	return 0;
}