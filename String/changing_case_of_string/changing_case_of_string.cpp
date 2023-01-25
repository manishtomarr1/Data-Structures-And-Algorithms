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

    string change_case_of_small() {

        cout << "\nenter string in small letters : ";
        getline(cin, any);
        cout << endl;

        for (int i = 0; i < any.length(); i++) {

            any[i] = any[i] - 32;
        }

        return any;
    }
    
    string change_case_of_capital() {

        cout << "\nenter string in capital letters : ";
        getline(cin, any);
        cout << endl;

        for (int i = 0; i < any.length(); i++) {

            any[i] = any[i] + 32;
        }

        return any;
    }

    string toogle() { // means covert upper case to lower case and vise versa

        cout << "\nenter any string in mix cases : ";
        getline(cin, any);
        cout << endl;

        for (int i = 0; i < any.size(); i++) {

            if (any[i] >= 'A' && any[i] <= 'Z') {

                any[i] = any[i]+32;
            }

            else if (any[i] >= 97 && any[i] <= 122) {

                any[i] = any[i]-32;
            }
        }

        return any;

    }
};

int main() {

    str s1;
    cout <<  s1.change_case_of_small() << endl;
    cout <<  s1.change_case_of_capital() << endl;
    cout << s1.toogle() << endl;

    return 0;
}