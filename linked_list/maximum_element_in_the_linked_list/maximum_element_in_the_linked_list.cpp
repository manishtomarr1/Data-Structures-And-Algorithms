#include<iostream>
using namespace std;

class node {

public:
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

int maximum_element() {

	int max = 0;
	node* ptr = head;
	max = ptr->data;

	while (ptr != nullptr) {

		if (ptr->data > max) {
			max = ptr->data;
			ptr = ptr->next;
		}

		else
			ptr = ptr->next;
	}

	cout << "\nmaximum element in the linked list are : ";
	return max;

}

int main() {

	insert(3);
	insert(1);
	insert(7);
	insert(2);
	insert(9);
	insert(5);
	insert(0);
	cout << "The linked list is: ";
	display();

	cout << maximum_element() << endl;
	
	return 0;

}