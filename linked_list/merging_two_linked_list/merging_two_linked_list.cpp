#include<iostream>
using namespace std;

class node {

public:

	int data;
	node* next;
};

node* head = nullptr;
node* second = nullptr;

void insert(int val) {

	node* temp = new node;

	temp->data = val;
	temp->next = nullptr;

	if (head == nullptr) {
		head = temp;
		second = temp;
	}

	else {

		second->next = temp;
		second = temp;
	}

}

node* another = nullptr; // for another list
node* anothersecond = new node;

void insert_second(int val) {

	node* temp = new node;

	temp->data = val;
	temp->next = nullptr;

	if (another == nullptr) {
		another= temp;
		anothersecond = temp;
	}

	else {

		anothersecond->next = temp;
		anothersecond = temp;
	}

}

void display() {

	node* newnode = new node;
	newnode = head;

	std::cout << "elements in the first linked list are : [ ";
	while (newnode != nullptr) {

		std::cout << newnode->data << " ";
		newnode = newnode->next;
	}
	std::cout << "]" << endl;

	if (another != nullptr) {
		node* temp = new node;
		temp = another;

		std::cout << "elements in the second linked list are : [ ";
		while (temp != nullptr) {

			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << "]" << endl;
	}
}

node* third = nullptr;// for combined list
node* last = nullptr;

void merge() { // time complixity theta(m+n).

	if (head->data < another->data) {

		third = last = head;
		head = head->next; // head now move on next node and the present node bacame the third linkedlist's first node.
		last->next = nullptr;
	}

	else {
		third = last = another;
		another = another->next;
		last->next = nullptr;
	}

	while (head !=nullptr && another !=nullptr) {

		if (head->data < another->data) {
			last->next = head; // beacuse it is smaller and last now point on this
			last = head; // now head node became the last node
			head = head->next; // head now move on next node
			last->next = nullptr;//third next noe became null
				
		}

		else {

			last->next = another;
			last = another;
			another = another->next;
			last->next = nullptr;
		}

	}

	if (head != nullptr)
		last->next = head;
	else
		last->next = another;
}

void display_merge() {

	node* temp = new node;
	temp = third;

	cout << "\nafter merging both linked lists in sorted order : [ ";
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "]" << endl;
}

int main() {

	insert(3);
	insert(5);
	insert(7);
	insert(8);
	insert(9);

	insert_second(2);
	insert_second(6);
	insert_second(7);
	insert_second(8);
	insert_second(10);
	insert_second(23);

	display();

	merge();
	display_merge();

	return 0;
}

