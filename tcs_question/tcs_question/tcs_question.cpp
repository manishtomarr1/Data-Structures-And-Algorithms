#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void display(vector<int>& vec) {
	cout << "[ ";
	for (int& i : vec) {
		cout << i << " ";
	}
	cout << "]" << endl;
}

int largestfactor(int n, int k) {

	vector <int> vec;
	double result = 0;

	for (double i = 1.0 ; i <= n; i++) {
		result = n / i;

		if (ceil(result) == floor(result)) {
			vec.push_back(i);
		}
		else
			continue;

	}

	sort(vec.begin(), vec.end());
	display(vec);

	if (k > vec.size())
		return 0;
	if (k <= vec.size() && k >= 0)
		return vec.at(k - 1);

}

int main() {
	cout << largestfactor(30, 9) << endl;

	return 0;
}