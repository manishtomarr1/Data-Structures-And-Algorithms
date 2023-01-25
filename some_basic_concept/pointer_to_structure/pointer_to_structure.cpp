#include<iostream>
using namespace std;

struct rectangle {
	int lenght;
	int breadth;
};

int main()
{
	struct rectangle r1 { 10,20 };
	struct rectangle* r2 = &r1;

	cout << r1.lenght << endl;
	cout << r1.breadth << endl;

	r2->lenght = 15;
	r2->breadth = 25;

	cout << r2->breadth << endl;
	cout << r2->lenght << endl;

	//create structure object dynamically
	struct rectangle* r3 = new  rectangle;

	r3->lenght = 11;
	r3->breadth = 16;

	cout << r3->lenght << endl;
	cout << r3->breadth << endl;

	return 0;
}