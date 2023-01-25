#include<iostream>
using namespace std;

class node {

public :
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

void insert_in_sorted(int val) { // time complixity = O(n)

	
	node* check = new node;
	node* follow = nullptr;
	node* temp = new node;
	temp->data = val;

	check = head;

	if (check->data > val) {

		temp->next = check;
		head=temp;
	}

	else {
		while (check && check->data < val) {
			follow = check;
			check = check->next;
		}
		temp->next = follow->next;
		follow->next = temp;
	}
}

int main() {

	insert(8);
	insert(13);
	insert(15);
	insert(17);
	insert(24);

	display();

	insert_in_sorted(7);

	display();

	return 0;
}