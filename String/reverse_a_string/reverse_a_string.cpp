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

    string reverse() {

        int count = 0;
        int anycount = any.size() - 1;
       
        while (count<=anycount) {
            swap(any[count], any[anycount]);
            anycount--;
            count++;
        }

        cout << "reverse of string is : ";
        return any;
    }

};

int main() {

    str s1;
    s1.getstr();
    cout << s1.reverse() << endl;

    return 0;
}