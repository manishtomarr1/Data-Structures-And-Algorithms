#include<iostream>
#include<stdio.h>
using namespace std;


struct rectangle {

	int lenght;
	int breadth;
	char x; // for charactor our computer take 4 byte but use only 1 byte -> called padding.

};

// we can alse declare a variable for structure outside the main.
//struct rectangle r1, r2, r3;

int main() {
	 
	struct rectangle r1={5,10};

	cout << r1.breadth << endl; //10

	r1.lenght = 19;
	r1.breadth = 18;

	cout << r1.lenght << endl;   //19
	cout << r1.breadth << endl; //18

	cout << sizeof(r1) << endl; //12
	cout << sizeof(rectangle) << endl; //12


	return 0;
}


