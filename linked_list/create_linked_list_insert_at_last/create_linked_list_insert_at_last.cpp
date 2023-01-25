#include<iostream>
using namespace std;

class node {

public :
	int data;
	node* next;
};

node* head = nullptr;
node* last = nullptr;

void insertlast(int val) {

	node* temp = new node;

    temp->data = val;
	temp->next = nullptr;

	if (head == nullptr) { // jb linkedlist khaali ho.
		head = temp; // head or last temp(first) node pe aa gye
		last = temp;
	}

	else {

		last->next = temp;// last ko new node ka adress de dia
		last = temp;// new node ko temp bna dia

	}
}

void display() {

	node* temp = new node;
	temp = head;

	cout << "elements in the linked list are : [ ";
	while (temp != nullptr) {

		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "]" << endl;
}

int main() {

	insertlast(8);
	insertlast(9);
	insertlast(10);

	display();

	return 0;
}