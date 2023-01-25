#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void diffrence(vector<int>num1, vector<int>num2, int target) {

	//sort(num1.begin(), num1.end());
	//sort(num2.begin(), num2.end());

	int i = 0;
	int j = 0;
	int count = 0;
	int diff = 0;

	while (i < num1.size()) {

		
		if (j == (num2.size())) {

			j = 0;
			i++;

			if (i == num1.size()) {
				break;
			}
			else 
			diff = (num1.at(i)) - (num2.at(j));
		}
	
		if (j < num2.size()) {
			diff = (num1.at(i)) - (num2.at(j));
		}

		if (num1.at(i) == num2.at(j)) {
			j++;
		}

		else if (num1.at(i) < num2.at(j)) {

			if (diff == target || diff == -(target)) {
				cout << "[ " << i << "," << j << " ]" << endl;
				j++;
				count++;
			}
			else
				j++;
		}

		else if (num1.at(i) > num2.at(j)) {

			if (diff == target || diff == -(target)) {
				cout << "[ " << i << "," << j << " ]" << endl;
				j++;
				count++;
			}
			else
				j++;
		}

	}

	if (count == 0) {
		cout << "[-1,-1]" << endl;
	}
}

int main() {

	vector <int> vec{ 2,6,7,9 };
	vector<int>vec1{ 1,0,2,9 };

	diffrence(vec, vec1, 7);

	return 0;
}