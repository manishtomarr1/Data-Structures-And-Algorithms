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

int count_nodes() {
	int count = 0;

	node* temp = head;

	while (temp != nullptr) {
		count++;
		temp = temp->next;
	}

	cout << "\ntotal nodes in linked list are : ";
	return count;
}

int sum() {

	int sum = 0;
	node* temp = head;

	while (temp != nullptr) {
		sum += temp->data;
		temp = temp->next;
	}

	cout << "\nsum of al nodes in linked list are : ";
	return sum;

}


int main() {

	insert(3);
	insert(1);
	insert(7);
	insert(2);
	insert(9);
	cout << "The linked list is: ";
	display();
	
	cout << count_nodes () << endl;
	cout << sum() << endl;
	return 0;

}