#include<iostream>
using namespace std;

class arr {

	int size;
	int length;
	int* array_pointer = new int[size];

public:

	void sizelelo(int s, int l) {
		size = s;
		length = l;

		cout << "size of array : " << size << endl;
		cout << "length of array : " << length << endl;

	}

	void insert() {

		cout << endl;
		for (int i = 0; i < length; i++) {
			cout << "enter element [" << i + 1 << "] : ";
			cin >> array_pointer[i];
			cout << endl;
		}

	}

	void display() {
		cout << endl;

		cout << "[ ";
		for (int i = 0; i < length; i++) {
			cout << array_pointer[i] << " ";
		}
		cout << "]" << endl;
	}

	void reverse() {
		int* extra_array = new int[size];
		int count = 0;

		for (int i = length - 1; i >= 0; i--) {
			
			extra_array[count] = array_pointer[i];
			count++;
		}

		for (int i = 0; i < length; i++) {
			array_pointer[i] = extra_array[i];
		}

		cout << "\nafter reverse : ";
		display();

		delete[] extra_array;
	}

	void anotherreverse() {
		
		int count = (length - 1);
		for (int i = 0; i < (length / 2); i++) {
			swap(array_pointer[i], array_pointer[count]);
			count--;
		}
		cout << "\nafter another reverse : ";
		display();
	}
};

int main() {

	arr a1;
	a1.sizelelo(2,2);
	a1.insert();
	a1.display();
	a1.reverse();
	a1.anotherreverse();

	return 0;
}