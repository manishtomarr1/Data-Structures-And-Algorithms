#include <iostream>
using namespace std;
#include<algorithm>
#include<array> 

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

//INSERT an element at given index

	void insert(int element, int index) {

		if (lenght < size && index < lenght && index >=0)  {

			for (int i = lenght; i >index; i--) {

				arr_ptr[i] = arr_ptr[i- 1];

			}

			arr_ptr[index] = element;
			lenght++;
		}

		else {

			cout << "enter valid detail!" << endl;
		}
	
	}
	
};



int main() {

	arr ar;

	ar.get_size();
	ar.fill();
	ar.display();


	cout << "\nenter a number to add in array :";
	int num;
	cin >> num;

	cout << "\nenter index at which element is add : ";
	int ind;
	cin >> ind;
	cout << endl;

	ar.insert(num, ind);

	cout << "\nafter adding " << num << " at index " << ind << " " << endl;

	ar.display();

	return 0;
}