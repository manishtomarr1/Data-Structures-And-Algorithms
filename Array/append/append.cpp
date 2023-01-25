#include <iostream>
using namespace std;
#include<algorithm>
#include<array> 

class arr {

	int size;
	int lenght;

public:

	int* arr_ptr = new int[size];

	void get_size() {

		cout << "enter the size of array : ";
		cin >> size;
		cout << endl;

		cout << "what is the lenght of the array : ";
		cin >> lenght;
		cout << endl;

	}

	void insert() {

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

	// append or add the element 

	void append(int* a) {

		if (lenght < size) {

			arr_ptr[lenght] = *a;
			lenght++;
		}

		else
			cout << "no space in array" << endl;

	}
};



int main() {

	arr ar;

	ar.get_size();
	ar.insert();
	

	cout << "\nenter a number to add in array :";
	int a;
	cin >> a;
	ar.append(&a);

	cout << "\nafter adding " << a << " " << endl;

	ar.display();


	ar.display();
	

	return 0;
}

/*
Another 

    #include<iostream>
using namespace std;

class arr {

public :
	int lenght;
	int size;

	void add(int arr[], int *element) {

		if (lenght < size) {

			arr[lenght] = *element;
			lenght++;
		}

		else

			cout << "array is full" << endl;

	}

	void display(int arr[]) {
		
		cout << "[ ";
		for (int i = 0; i < lenght; i++) {

			cout << arr[i] << " ";
		}
		cout << "]" << endl;

	}

	void insert(int arr[]) {

		for (int i = 0; i < lenght; i++) {

			cout << "enter element [" << i + 1 << "]" << endl;
			cin >> arr[i];
		}
	}
};

int main() {

	arr a1;

	cout << "enter size of array : " << endl;
	cin >> a1.size;

	cout << "enter lenght " << endl;
	cin >> a1.lenght;

	int* array_ptr = new int[a1.size] ;

	a1.insert(array_ptr);
	a1.display(array_ptr);

	cout << "enter the number you wanna to add : " << endl;
	int num;
	cin >> num;

	a1.add(array_ptr, &num);
	a1.display(array_ptr);
	
	return 0;

}
*/