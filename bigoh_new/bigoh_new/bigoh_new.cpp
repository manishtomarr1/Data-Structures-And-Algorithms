#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void display(vector<int> vec) {

	cout << "[ ";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << " ";
	}
	cout << "]" << endl;
}

vector <int>  diffrence(vector <int> num1) {

	int sum;
	int diff = 0;
	int carry = 0;
	int count = 0;

	vector<int> nums2;
	int size = num1.size();
	vector<int> num3(size, 0);

	for (int i = num1.size() - 1; i >= 0; i--)
		nums2.push_back(num1.at(i));

	for (int i = num1.size() - 1; i >= 0; i--) {


		sum = num1.at(i) + nums2.at(i);

		if (sum > 10) {
			diff = (sum - 10);
			num3.at(i) = diff;
			carry = diff;
			count = i;
		}

		else if (i == count) {
			sum += carry;
			num3.at(i) = sum;
		}

		else if (sum < 10) {
			num3.at(i) = (sum);
		}
	}

	display(num3);

	return nums2;
}

int main() {

	vector <int> vec{ 1,2,3,4 };

	diffrence(vec);

	return 0;
}