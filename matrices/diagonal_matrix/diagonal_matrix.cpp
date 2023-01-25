#include<iostream>
using namespace std;

class matrix {

private :

	int size;
	int* arr;

public :

	void digonal_matrix(int i, int j) {

		size = i;
		arr = new int[size];

	}

	void set_value(int i, int j, int x) {

		if (i == j && i <= size && j <= size) {

			arr[i - 1] = x;
		}
	}

	int get_value(int i, int j) {
		
		if (i == j && i <= size && j <= size) 
			return arr[i - 1];
		
		else
			return 0;
	 }

	~matrix() {
		delete[] arr;
	}
};

int main() {

	matrix d1;
	d1.digonal_matrix(5, 5);


	d1.set_value(1, 1,5);
	d1.set_value(2,2, 6);
	d1.set_value(3,3, 7);
	d1.set_value(4,4, 8);
	d1.set_value(5,5, 9);

	cout << "diagonal elements are : " << endl;
	cout << d1.get_value(1, 1) << endl;
	cout << d1.get_value(2, 2) << endl;
	cout << d1.get_value(3, 3) << endl;
	cout << d1.get_value(4, 4) << endl;
	cout << d1.get_value(5,5) << endl;

	cout << "non-diagonal elements are : " << endl;
	cout << d1.get_value(4,2) << endl;


	return 0;
}
