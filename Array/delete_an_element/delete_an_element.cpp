#include <iostream>
using namespace std;
#include<algorithm>
#include<array>
#include<vector>

class arr {

	int size;
	int lenght;
	int* arr_ptr = new int[size];

public:

	void get_size() {

		cout << "enter the size of array : ";
		cin >> size;
		cout << endl;

		cout << "what is the lenght of the array : ";
		cin >> lenght;
		cout << endl;

	}

	void fill() {

		for (int i = 0; i < lenght; i++) {

			cout << "enter element [" << i + 1 << "] : ";
			cin >> arr_ptr[i];
			cout << endl;

		}

	}

	void display() {

		cout << "\nelements of array is : " << endl;
		cout << "\n[ ";
		for (int i = 0; i < lenght; i++) {
			cout << arr_ptr[i] << " ";
		}
		cout << "]" << endl;
	}

//DELETE an element from an given index

	void delete_element(int index) { 

		if (index >= 0 && index < lenght) {

			for (int i = index; i < lenght - 1; i++) {

				arr_ptr[i] = arr_ptr[i + 1];

			}

			lenght--;
		}

	}

};



int main() {

	arr ar;

	ar.get_size();
	ar.fill();


	cout << "\nenter a index at element is delete :";
	int index;
	cin >> index;
	

	cout << "\nafter deleting the element from index " << index << " " << endl;
	ar.delete_element(index);

	ar.display();

	return 0;
}

