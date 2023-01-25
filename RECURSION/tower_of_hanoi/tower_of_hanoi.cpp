#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector <int> vec) {
	cout << "[ ";
	for (const auto& i : vec) {
		cout << i << " ";
	}
	cout << "]" << endl;
}

void TOH(vector <int> vec1, vector <int> vec2, vector<int> vec3) {

	display(vec1);

	sort(vec1.begin(), vec1.end());

	for (int i = 0; i < vec1.size(); i++) {

		vec2.push_back(vec1.at(i));
		vec3.push_back(vec2.at(i));
	}

	display(vec2);
	display(vec3);

}

int main() {
	vector <int> vec{ 1,4,3,8,5,10,6 };
	vector <int> vec1{  };
	vector <int> vec2{ };

	TOH(vec, vec1, vec2);

	return 0;
}

