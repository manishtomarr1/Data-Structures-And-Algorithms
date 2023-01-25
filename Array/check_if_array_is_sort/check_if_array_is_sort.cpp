#include<iostream>
#include<algorithm>
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

	void insert_in_sorted_array(int number) {

		sort(array_pointer, (array_pointer + length));
		cout << "after sorting : ";
		display();

		if (length < size) {

			if (number > array_pointer[length - 1] || number == array_pointer[length-1]) {
				array_pointer[length] = number;
				length++;
			}

			else if (number < array_pointer[length - 1]) {

				for (int i = length - 1; i >= 0; i--) {

					if (array_pointer[i] > number) {
						array_pointer[i + 1] = array_pointer[i];
					}
					else if (array_pointer[i]<number) {
						array_pointer[i+1] = number;
						length++;
						break;
					}
				}
			}
		}

		else {
			cout << "no space in array!" << endl;
		}

		cout << "\nafter inserting in sorting place : ";
		display();
	}
};

int main() {

	arr a1;
	a1.sizelelo(8, 6);
	a1.insert();
	a1.display();
	a1.insert_in_sorted_array(8);
	return 0;
}