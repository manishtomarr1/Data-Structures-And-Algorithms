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

    
    void count_vowel_conso() {

        int vowel_count = 0;
        int conso_count =0;

        for (int i = 0; i < any.size(); i++) {

            if (any[i] == 'a' || any[i] == 'e'|| any[i] == 'i'|| any[i] == 'o'|| any[i] == 'u' || any[i] == 'A' || any[i] == 'E' || any[i] == 'I' || any[i] == 'O'|| any[i] == 'U') {
                
                vowel_count++;
            }

            else if ((any[i]>=65 && any[i]<=90) || (any[i]>=97 && any[i]<=122)) {
                conso_count++;
            }
        }

        cout << "number of consonent : " << conso_count << endl;
        cout << "number of vowel : " << vowel_count << endl;

    }

    int word_count() {
        int wordcount = 0;

        for (int i = 0; i < any.length(); i++) {

            if (any[i] == 32 && any[i - 1] != 32) {
                    wordcount++;
            }
        }

        cout << "total word in string is : ";
        return wordcount+1;
    }

};

int main() {

    str s1;
    s1.getstr();
    s1.count_vowel_conso();
    cout << s1.word_count() << endl;

    return 0;
}