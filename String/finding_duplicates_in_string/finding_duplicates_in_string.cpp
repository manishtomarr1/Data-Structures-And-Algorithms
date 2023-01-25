#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class str {

    string any;

public:

    void getstr() {

        cout << "enter any string : ";
        getline(cin, any);
        cout << endl;
    }

    void convert() {

        for (int i = 0; i < any.size(); i++) {

            if (any[i] >= 65 && any[i] <= 90) {
                any[i] += 32;
            }
        }
    }

    bool isduplicate() {

        convert();

        int last = any.size() - 1;

        sort(any.begin(),any.end());

        for (int i = 1; i < any.size(); i++) {

            if (any[i] == any[i - 1]) {
                return true;
            }
        }

        return false;
    }

};

int main() {

    str s1;
    s1.getstr();
    cout << boolalpha;
    cout << s1.isduplicate() << endl;

    return 0;
}