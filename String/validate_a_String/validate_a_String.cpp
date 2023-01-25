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

    bool valid() {

        cout << "enter a password which does not contain any symbols or special charactors : ";
        getline(cin, any);
        cout << endl;
        int count = 0;

        for (int i = 0; i < any.length(); i++) {
            if (!(any[i] >= 65 && any[i] <= 90) && !(any[i] >= 97 && any[i] <= 122) && !(any[i] >= 48 && any[i] <= 57)) {

                count++;
            }
        }

        if (count > 0)
            return false;
        else
            return true;
    }

};

int main() {

    str s1;
    //s1.getstr();
    cout << boolalpha;
    cout << s1.valid() << endl;
}