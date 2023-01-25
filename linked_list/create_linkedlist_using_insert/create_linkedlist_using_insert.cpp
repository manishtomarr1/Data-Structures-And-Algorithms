#include<iostream>
using namespace std;

class node {

public:
	int data;
	node* next;
};

node* head = nullptr;

void insert(int position, int value) {
	node* newnode = new node;// for adding new node.
	node* temp = new node; // given node pe jaane k liye.

	if (position == 0) {

		newnode->data = value;
		newnode->next = head;
		head = newnode;

		cout << value << " added at index " << position << endl;
	}

	else if (position > 0) {

		newnode->data = value;
		temp = head;

		for (int i = 0; i < position - 1 && temp; i++) { // check if temp is avlbl or not

			temp = temp->next;
		}

		if (temp) { // if temp avlbl
			newnode->next = temp->next;
			temp->next = newnode;
			cout << value << " added at index " << position << endl;
		}


	}

}

void display() {

	node* temp = new node;
	temp = head;

	cout << "elements in linked list are : [ ";
	while (temp != nullptr) {

		cout << temp->data <<  " ";
		temp = temp->next;
	}
	cout << "]" << endl;
}

int main() {

	insert(0, 6);
	insert(1, 8);
	insert(2, 13);
	insert(3, 9);
	insert(4, 7);
	insert(5, 1);
	insert(6, 3);

	display();

	return 0;
}