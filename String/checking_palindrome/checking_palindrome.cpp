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

    bool ispalindrome() {

        convert();

        string check;
        check = any;

        int count = 0;
        int anycount = any.size() - 1;

        while (count <= anycount) {
            swap(any[count], any[anycount]);
            anycount--;
            count++;
        }

        if (check == any) {
            return true;
        }

        if (check != any) {
            return false;
        }
    }

};

int main() {
    str s1;

    s1.getstr();
    cout << boolalpha;
    cout << s1.ispalindrome() << endl;

    return 0;
}