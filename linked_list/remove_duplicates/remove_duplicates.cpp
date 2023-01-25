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

void remove_duplicates() {

	node* temp = new node;
	temp = head;
	node* pre = temp->next;
	node* tempnext = nullptr; // for deleting duplicate node.

	while (temp != nullptr && pre) {

		if (temp->data == pre->data) {
			
			temp->next = pre->next;
			tempnext = pre;
			pre = pre->next;
			delete tempnext; //delete duplicates node.
			
		}

		else {
			temp = temp->next;
			pre = temp->next;
		}

	}
	
}

int main() {
	insert(18);
	insert(9);
	insert(10);
	insert(10);
	insert(11);
	insert(12);
	insert(12);
	insert(13);
	insert(13);

	display();

	remove_duplicates();
	display();

	return 0;
}