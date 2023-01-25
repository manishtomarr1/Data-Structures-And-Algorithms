#include<iostream>
using namespace std;

class node {

public:
	int data;
	node* next;
};

node* head = nullptr;
node* last = nullptr;

void insert(int val) {

	node* temp = new node;
	temp->data = val;
	temp->next = nullptr;

	if (head == nullptr) {
		head = temp;
		last = temp;
	}

	else {
		last->next = temp;
		last = temp;
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

bool issorted() {

	node* temp = new node;
	temp = head;
	node* pre = temp->next;

	while (temp != nullptr && pre) {

		if (temp->data > pre->data) {
			cout << "linkedlist is sorted : ";
			return false;
			break;
		}

		else {
			temp = temp->next;
			pre = temp->next;
		}

	}
	cout << "linkedlist is sorted : ";
	return true;
}

int main() {

	insert(18);
	insert(9);
	insert(10);
	insert(11);
	insert(12);
	insert(13);

	display();

	cout << boolalpha;
	cout << issorted() << endl;
	return 0;
}