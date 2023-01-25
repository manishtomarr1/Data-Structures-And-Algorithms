#include<iostream>
#include<algorithm>
using namespace std;

class arr {

	int size;
	int length;
    int* array_pointer = new int[size];

public :

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

	int get(int index) { // constant time complexity

		if (index < length && index >= 0) {
			cout << "value at index : " << index << " is ";
			return array_pointer[index];
		}

		else
			return -1;
	}

	void set(int index, int value) { // constant time complexity

		if (index < length && index >= 0) {
			array_pointer[index] = value;
			cout << endl;
			cout << "after replace the value at index : " << index << " ";
			display();
		}

		else
			cout << "invalid index" << endl;

	}

	int max() { // time compexity O(n)
		cout << endl;
		display();

		int max = array_pointer[0];

		for (int i = 0; i < length; i++) {
			if (array_pointer[i] > max) {
				max = array_pointer[i];
			}
			else
				max = max;
		}

		cout << "the maximum element in the list is : ";
		return max;
	}


	int min() { // time compexity O(n)
		cout << endl;
		display();

		int min = array_pointer[0];

		for (int i = 0; i < length; i++) {
			if (array_pointer[i] < min) {
				min = array_pointer[i];
			}
			else
				min = min;
		}

		cout << "the minimum element in the list is : ";
		return min;
	}

	int sum() { // time compexity O(n)

		int sum = 0;
		for (int i = 0; i < length; i++) {
			sum += array_pointer[i];
		}
		cout << "\nsum of the list is : ";
		return sum;
	}

	int average() { // time compexity O(n)

		cout << endl;
		int average;
		int sum=0;

		for (int i = 0; i < length; i++) {
			sum += array_pointer[i];
		}
		average = (sum / length);

		cout << "average of the list is : ";
		return average;
	}
};

int main() {

	arr a1;
	a1.sizelelo(7, 7);
	a1.insert();
	a1.display();
	cout << a1.get(5) << endl;
	a1.set(5, 12);
	cout << a1.max() << endl;
	cout << a1.min() << endl;
	cout << a1.sum() << endl;
	cout << a1.average() << endl;

	return 0;
}