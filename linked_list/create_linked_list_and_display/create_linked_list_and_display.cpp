#include<iostream>
using namespace std;

class node {

public :
	int data;
	node* next;

};

node* head = nullptr;

void insert(int new_data) {

	node* new_node = new node;
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;

}

void display() {
	

	node* ptr = head;

	cout << "[ ";
	while (ptr != nullptr) {

		cout << ptr->data << " ";
		ptr = ptr->next;

	}
	cout << "]" << endl;

}

void display_rec() {

	if (head != nullptr) {
		cout << head->data << " ";
		head = head->next;
		display_rec();
	}
	
}

int main() {

	insert(3);
	insert(1);
	insert(7);
	insert(2);
	insert(9);
	cout << "The linked list is: ";
	display();
	cout << "\nrecursive : " << endl;
	cout << "[ ";
	display_rec();
	cout << "]" << endl;
	return 0;

}