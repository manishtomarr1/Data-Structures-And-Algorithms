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
		cout << "\nsize :" << size << endl;
		cout << "lenght :" << lenght << endl;
	}

	void insert() {

		cout << endl;
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

	int binary_search(int lower, int upper, int key) {

		sort(array_pointer, array_pointer + lenght);

		cout << "after sorting array " << endl;

		display();

		while (lower <= upper) {
			int mid = (lower + upper) / 2;

			if (array_pointer[mid] == key) {
				cout << key << " " << "found" << endl;
				cout << "at index ";
				return mid;
				cout << endl;
			}
			else if (key > array_pointer[mid]) {
				upper = upper;
				lower = mid + 1;
			}
			else {
				lower = lower;
				upper = mid - 1;
			}
		}
		return -1;
	}
};

int main() {

	cout << "enter the size of array : ";
	int size;
	cin >> size;
	cout << endl;

	cout << "enter lenght of array : ";
	int lenght;
	cin >> lenght;
	cout << endl;

	arr a1;
	a1.get(size,lenght);
	a1.insert();
	a1.display();

	cout << "\nenter the element for search : ";
	int key;
	cin >> key;
	cout << endl;

	cout << a1.binary_search(0, lenght, key) << endl;

	return 0;
}
