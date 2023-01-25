#include<iostream>
using namespace std;

class matrix {

private:

	int size;
	int* arr;
	int n;

public:

	void lower_triangular_matrix(int i, int j) {
		n = i;

		size = (i*(i+1))/2; // because we have to store only non zero elements
		arr = new int[size];

	}

// row measure method

	void set_value(int i, int j, int x) { 

		if (i>=j) {

			arr[(i*(i-1))/2 + j-1] = x; // formula for storing value in 1D array.
		}
	}

	int get_value(int i, int j) {

		if (i>=j)
			return arr[(i * (i - 1)) / 2 + j - 1];

		else
			return 0;
	}

//column measure measure

	void set_value_column(int i, int j, int x) {

		if (i >= j) {

			arr[(n * (j - 1) - ((j - 2) * (j - 1) / 2)) + (i - j)] = x; // formula for storing value in 1D array.
		}
	}

	int get_value_column(int i, int j) {

		if (i >= j)
			return arr[(n * (j - 1) - ((j - 2) * (j - 1) / 2)) + (i - j)];

		else
			return 0;
	}

	~matrix() {
		delete[] arr;
	}
};

int main() {

	matrix m1;
	m1.lower_triangular_matrix(5, 5);

	m1.set_value(1, 1, 2);
	m1.set_value(1, 2, 2);
	m1.set_value(2, 1, 3);
	m1.set_value(2, 2, 4);
	m1.set_value(3, 1, 5);
	m1.set_value(3, 2, 6);
	m1.set_value(3, 3, 7);
	m1.set_value(4, 1, 8);

	cout << "row measure formula" << endl;

//row measure
	cout << "lower triangular elements" << endl;
	cout << " [ ";
	cout << m1.get_value(1 ,1) << " ";
	cout << m1.get_value(2, 1) << " ";
	cout << m1.get_value(2, 2) << " ";
	cout << m1.get_value(3, 1) << " ";
	cout << m1.get_value(3, 2) << " ";
	cout << m1.get_value(3, 3) << " ";
	cout << m1.get_value(4, 1) << " ";
	cout << "]" << endl;
	
	cout << "upper triangular elements" << endl;
	cout << "[ ";
	cout << m1.get_value(2, 3) << " " ;
	cout << m1.get_value(2, 4) << " " ; 
	cout << m1.get_value(3, 5) << " " ; 
	cout << m1.get_value(3, 4) << " " ; 
	cout << m1.get_value(4, 5) << " " ;
	cout << "]" << endl;


//column measure

    m1.set_value_column(1, 1, 2);
	m1.set_value_column(1, 2, 2);
	m1.set_value_column(2, 1, 3);
	m1.set_value_column(2, 2, 4);
	m1.set_value_column(3, 1, 5);
	m1.set_value_column(3, 2, 6);
	m1.set_value_column(3, 3, 7);
	m1.set_value_column(4, 1, 8);

	cout << "\ncolumn measure formula" << endl;

	cout << "lower triangular elements" << endl;
	cout << " [ ";
	cout << m1.get_value_column(1, 1) << " ";
	cout << m1.get_value_column(2, 1) << " ";
	cout << m1.get_value_column(2, 2) << " ";
	cout << m1.get_value_column(3, 1) << " ";
	cout << m1.get_value_column(3, 2) << " ";
	cout << m1.get_value_column(3, 3) << " ";
	cout << m1.get_value_column(4, 1) << " ";
	cout << "]" << endl;

	cout << "upper triangular elements" << endl;
	cout << "[ ";
	cout << m1.get_value_column(2, 3) << " ";
	cout << m1.get_value_column(2, 4) << " ";
	cout << m1.get_value_column(3, 5) << " ";
	cout << m1.get_value_column(3, 4) << " ";
	cout << m1.get_value_column(4, 5) << " ";
	cout << "]" << endl;

	return 0;
}
