#include<iostream>
using namespace std;

class arr {

	int size;
	int* arr_ptr = new int[size];
	int lenght;

public :

	void get_size() {

		cout << "enter the size of array : ";
		cin >> size;
		cout << endl;

		cout << "what is the lenght of the array : ";
		cin >> lenght;
		cout << endl;

	}

	void insert() {

		for (int i = 0; i < size; i++) {

			cout << "enter element [" << i + 1 << "] : ";
			cin >> arr_ptr[i];
			cout << endl;

		}
	}

	void display() {

		cout << "\nelements of array is : " << endl;
		cout << "\n[ ";
		for (int i = 0; i < size; i++) {
			cout << *arr_ptr  << " ";
			arr_ptr++;
		}
		cout << "]" << endl;
	}
};

int main() {

	arr ar;
	ar.get_size();
	ar.insert();
	ar.display();

	return 0;

}