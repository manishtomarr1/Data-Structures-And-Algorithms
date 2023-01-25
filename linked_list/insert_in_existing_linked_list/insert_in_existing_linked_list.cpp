#include<iostream>
using namespace std;

class node {

public:

	int data;
	node* next;
};

node* head = nullptr;
node* new_node;

void insert(int new_data) {

	new_node = new node;

	new_node->data = new_data;
	new_node->next = head; // new node k next ko null kra
	head = new_node; // new node ko head banaya.

}

void display() {

	cout << "[ ";
	node* temp = head;
	while (temp != nullptr) {

		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "]" << endl;
}

void insert_before_first_node(int val) { //time complixity of this is O(1).

	node* nnode = new node; // new node for inserting data at front
	nnode->data = val;
	nnode->next = head;
	head = nnode;
}

void insert_given_index(int possition, int val) { //time complixity O(n)

	node* temp = new node;// for that node jiske aage node insert krni hai
	node* add = new node; // new node that have to insert


	if (possition == 0) {
		add->data = val;
		add->next = head;
		head = add;
	}
	else {

		add->data = val;
		temp = head;

		for (int i = 0; i < possition - 1&&temp ; i++) {
			temp = temp->next;
		}
		if (temp) {

			add->next = temp->next;
			temp->next = add;

		}
	}
}

int main() {

	insert(8);
	insert(7);
	insert(12);
	insert(3);
	insert(6);
	insert(1);

	display();

	insert_before_first_node(13);
	display();

	insert_given_index(13, 11);
	display();

	return 0;
}