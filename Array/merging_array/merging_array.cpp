#include<iostream>
#include<algorithm>
using namespace std;

class arr {

	int size;
	int length;
	int* array_pointer = new int[size];
	int* array_another = new int[size];
	int* merge_array = new int[length + length];

public:

	void sizelelo(int s, int l) {
		size = s;
		length = l;

		cout << "size of array : " << size << endl;
		cout << "length of array : " << length << endl;

	}

	void insert_first() {

		cout << endl;
		for (int i = 0; i < length; i++) {
			cout << "enter element [" << i + 1 << "] : ";
			cin >> array_pointer[i];
			cout << endl;
		}

	}

	void insert_second() {

		cout << endl;
		for (int i = 0; i < length; i++) {
			cout << "enter element [" << i + 1 << "] : ";
			cin >> array_another[i];
			cout << endl;
		}

	}

	void display_first() {
		cout << "\nfirst array: ";
		cout << endl;
		
		cout << "[ ";
		for (int i = 0; i < length; i++) {
			cout << array_pointer[i] << " ";
		}
		cout << "]" << endl;
	}

	void display_second() {
		cout << "\nsecond array : ";
		cout << endl;

		cout << "[ ";
		for (int i = 0; i < length; i++) {
			cout << array_another[i] << " ";
		}
		cout << "]" << endl;
	}

	void display_merge() {
		cout << endl;

		cout << "[ ";
		for (int i = 0; i < (length+length); i++) {
			cout << merge_array[i] << " ";
		}
		cout << "]" << endl;
	}

	void merge() {

		sort(array_pointer, array_pointer + length);
		sort(array_another, array_another + length);

		cout << "\nafter sorting array 1 : ";
		display_first();
		cout << "\nafter sorting array 2 : ";
		display_second();

		int i = 0;
		int j = 0;
		int k = 0;

		while (i <= length && j <= length) {

			if (i < length && j < length) {
				if (array_pointer[i] < array_another[j] || array_pointer[i] == array_another[j]) {
					merge_array[k] = array_pointer[i];
					i++;
					k++;
				}

				else if (array_pointer[i] > array_another[j]) {
					merge_array[k] = array_another[j];
					j++;
					k++;
				}
			}

			else if (i >= length) {
				merge_array[k] = array_another[j];
				j++;
				k++;
			}

			else if (j >= length) {
				merge_array[k] = array_pointer[i];
				i++;
				k++;
			}

		}

		cout << "\nafter merging both array in sort form : ";
		display_merge();
	}
};

int main() {

	arr a1;
	a1.sizelelo(6, 6);

	a1.insert_first();
	a1.display_first();

	a1.insert_second();
	a1.display_second();

	a1.merge();
	
	return 0;
}