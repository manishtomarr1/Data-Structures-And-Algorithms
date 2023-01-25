#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class str {

    string any;

public :

    void getstr() {

        cout << "enter any string : ";
        getline(cin,any);
        cout << endl;
    }

    int strlength() {
        int i = 0;

        while (any[i] != '\0') {
            i++;
        }

        cout << "length of the string is : ";
        return i;
    }

};

int main() {

    str s1;
    s1.getstr();
    cout << s1.strlength() << endl;

    return 0;
}

/*

* Other method to find length of string 
 
*    cout << any.length() << endl; -> give the length of any 
*    cout << any.size() << endl; -> give the length of any 
 
*/