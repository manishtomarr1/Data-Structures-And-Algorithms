#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class str {

    string any;

public:

    void getstr() {

        cout << "enter any string : ";
        getline(cin, any);
        cout << endl;

    }

    void permutation() {

        sort(any.begin(), any.end());

        do {
            cout << any << endl;
        } while (next_permutation(any.begin(), any.end()));
    }

};

int main() {

    str s1;
    s1.getstr();
    s1.permutation();

    return 0;
}