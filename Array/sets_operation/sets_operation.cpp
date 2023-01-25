#include<iostream>
#include<algorithm>
using namespace std;

class arr {

	int size;
	int length;
	int* array_pointer = new int[size];
	int* array_another = new int[size];
	int* merge_array = new int[length + length];
	int count = 0;
	int count_intersection = 0;
	int count_diff = 0;

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
		for (int i = 0; i < count-1; i++) {
			cout << merge_array[i] << " ";
		}
		cout << "]" << endl;
	}

	void display_intersection() {
		cout << endl;

		cout << "[ ";
		for (int i = 0; i < count_intersection - 1; i++) {
			cout << merge_array[i] << " ";
		}
		cout << "]" << endl;
	}

	void display_diff() {
		cout << endl;

		cout << "[ ";
		for (int i = 0; i < count_diff-1; i++) {
			cout << merge_array[i] << " ";
		}
		cout << "]" << endl;
	}

	void set_union() {

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
				if (array_pointer[i] < array_another[j] ) {
					merge_array[k] = array_pointer[i];
					i++;
					k++;
				}

				else if (array_pointer[i] > array_another[j]) {
					merge_array[k] = array_another[j];
					j++;
					k++;
				}

				else if (array_pointer[i] == array_another[j]) {
					merge_array[k] = array_pointer[i];
					i++;
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
	
			count = k;

		}

		cout << "\nafter union of both set in sort form : ";
		display_merge();
	}

	void set_intersection() {

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

			if (array_pointer[i] == array_another[j]) {
				merge_array[k] = array_pointer[i];
				i++;
				j++;
				k++;
			}

			else if (array_pointer[i] > array_another[j]) {

				j++;
			}

			else if (array_pointer[i] < array_another[j]) {

				i++;
			}

			count_intersection = k;
		}
		cout << "\nintersectioin of sets in sort form : ";
		display_intersection();

	}

	void set_diffrence() {

		sort(array_pointer, array_pointer + length);
		sort(array_another, array_another + length);

		cout << "\nafter sorting array 1 : ";
		display_first();
		cout << "\nafter sorting array 2 : ";
		display_second();

		int i = 0;
		int j = 0;
		int k = 0;

		while (i <= length) {
			
			if (array_pointer[i] < array_another[j]) {
				merge_array[k] = array_pointer[i];
				i++;
				k++;
			}

			if (array_pointer[i] > array_another[j]) {
			
				j++;
			}


			if (array_pointer[i] == array_another[j]) {
				i++;
				j++;
			}

			count_diff = k;

		}

		cout << "\nA-B = ";
		display_diff();

	}
	
};

int main() {

	arr a1;
	a1.sizelelo(6, 6);

	a1.insert_first();
	a1.display_first();

	a1.insert_second();
	a1.display_second();

	a1.set_union();

	a1.set_intersection();

	a1.set_diffrence();

	return 0;
}