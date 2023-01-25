#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector <int>& vec) {

	cout << "[ ";
	for (const auto& i : vec) {

		cout << i << " ";
	}

	cout << "]" << endl;
}

//REMOVE ALL EVEN NUMBER
void remove(vector<int>& vec) {

	cout << "\nafter deleting all even number from vector " << endl;

	auto it = remove_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0; });
	vec.erase(it, vec.end());

}

//REMOVE DESIRED INDEX ELEMENT
void erase(vector <int>& vec) {

	cout << "\nenter the index to remove the element : ";
	int index;
	cin >> index;

	if (index < vec.size() && index >= 0) {

		vec.erase(vec.begin() + index);

		cout << "\nafter deleting the element at index " << index << " :" << endl;

		display(vec);

	}

	else
		cout << "\nenter valid index" << endl;

}

// REMOVE MULTIPAL ELEMENTS IN RANGE
void eraseinrange(vector <int>& vec) {

	cout << "\nbefore removing last three element" << endl;
	display(vec);

	cout << "\nerase last 3 element" << endl;

	vec.erase(vec.end() - 3, vec.end());

	cout << "\nafter erasing last three element " << endl;
	display(vec);


}


int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };

	display(vec);

	remove(vec);
	display(vec);

	erase(vec);

	eraseinrange(vec);

	return 0;
}