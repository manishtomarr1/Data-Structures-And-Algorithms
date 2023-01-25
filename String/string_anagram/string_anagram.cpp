#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class str {

    string any;
    string another;

public:

    void getstr() {

        cout << "enter any string : ";
        getline(cin, any);
        cout << endl;

        cout << "enter another string : ";
        getline(cin, another);
        cout << endl;
    }

    void convert() {

        for (int i = 0; i < any.size(); i++) {

            if (any[i] >= 65 && any[i] <= 90) {
                any[i] += 32;
            }
        }
    }

    void display(vector<int> vec) {
        cout << "[ ";
        for (int i = 0; i < vec.size(); i++) {
            cout << vec.at(i) << " ";
        }
        cout << "]" << endl;
    }

    void convertanother() {

        for (int i = 0; i < another.size(); i++) {

            if (another[i] >= 65 && another[i] <= 90) {
                another[i] += 32;
            }
        }
    }

    bool isanagram() {
        int count = 0;
        cout << "by normal method : ";

        convert();
        convertanother();
        
        sort(any.begin(), any.end());
        sort(another.begin(), another.end());

        for (int i = 0; i < another.size(); i++) {

            if (any[i] == another[i]){
                
                }

             if (any[i] != another[i]) {
                 count++;
             }
        }

        if (count > 0)
            return false;
        return true;
    }

    bool isanagram_byhash() {
        cout << "\nby hash table : ";
        vector<int> hash(26, 0);
        int count = 0;

        convert();
        convertanother();

        for (int i = 0; i < any.size(); i++) {
            count = any[i];
            count = count - 97;
            hash[count] ++;
        }

        for (int i = 0; i < another.size(); i++) {
            count = another[i];
            count = count - 97;
            hash[count] --;
        }

        for (int i = 0; i < 26; i++) {
            
            if (hash[i] > 0)
                return false;
            if (hash[i] < 0)
                return false;
        }
        return true;
        
    }

};

int main() {

    str s1;
    s1.getstr();
    cout << boolalpha;
    cout << s1.isanagram() << endl;
    cout << s1.isanagram_byhash() << endl;

    return 0;
}