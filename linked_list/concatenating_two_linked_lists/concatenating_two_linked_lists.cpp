#include<iostream>
using namespace std;

class node {

public :

	int data;
	node* next;
};

class nodetwo {

public :

	int data;
	nodetwo* next;
};

node* first = nullptr;
node* second = nullptr;

nodetwo* head = nullptr;
nodetwo* last = nullptr;

node* temp = new node;


void insertinfirst(int val) {

	node* temp = new node;
	temp->data = val;
	temp->next = nullptr;

	if (first == nullptr) {

		first = temp;
		second = first;
	}

	else {

		second->next = temp;
		second = temp;

	}
}

void insertinsecond(int val) {

	nodetwo* temp= new nodetwo;
	temp->data = val;
	temp->next = nullptr;
	
	if (head == nullptr) {

		head = temp;
		last = head;
	}

	else {

		last->next = temp;
		last = temp;

	}
}

void display() {

	node* temp = new node;
	temp = first;

	cout << "elements in the first linked list are : [ ";
	while (temp != nullptr) {

		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "]" << endl;

	nodetwo *temp1 = new nodetwo;
	temp1 = head;

	cout << "elements in the second linked list are : [ ";
	while (temp1 != nullptr) {

		cout << temp1->data << " ";
		temp1 = temp1->next;
	}
	cout << "]" << endl;

}

void concatenate() {

	temp = first;

	while (temp != nullptr) {
		temp = temp->next;
	}

	//temp->next = ;

	
}

int main() {

	insertinfirst(7);
	insertinfirst(4);
	insertinfirst(1);
	insertinfirst(9);

	insertinsecond(10);
	insertinsecond(16);
	insertinsecond(14);
	insertinsecond(12);
	insertinsecond(19);

	display();

	concatenate();
	display();

	return 0;
}