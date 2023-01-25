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

void delete_first_node() { // time complixity O(1)

	node* temp = new node; //for deleting first node 
	temp = head;
	head = temp->next; // head now became second node.
	int d; // for kept the data of deleting node.
	d = temp->data;
	delete temp;

}

void delete_node_at_given_pos(int position) {

	node* temp = new node;
	node* pre = nullptr;
	temp = head;

	if (position == 1) {
		head = temp->next;
		delete temp;
	}

	else {

		for (int i = 0; i < position - 1 && temp; i++) {
			pre = temp;
			temp = temp->next;

		}

		if (temp) {

			pre->next = temp->next;
			delete temp;
		}
	}

}

int main() {

	insert(8);
	insert(9);
	insert(11);
	insert(6);
	insert(4);
	insert(2);

	display();

	delete_first_node();
	display();

	delete_node_at_given_pos(3);         
	display();

	return 0;
}