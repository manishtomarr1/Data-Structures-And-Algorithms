#include<iostream>
using namespace std;

class node {

public :

	int data;
	node* next;
};

node* head = nullptr; // bacause we want head for starting any linked list
node* second = nullptr; // we want second bacause we have know which is the last node bacause next node node is insert after this

void insert(int data) {

	node* temp = new node;
	temp->data = data;
	temp->next = nullptr; // bacause when we want to know which is last node thats why we make null 

	if (head == nullptr) { // means that linked list is empty
		head = temp;
		second = head;
	}

	else {

		second->next = temp;
		second = temp;
	}
}

node* another = nullptr;
node* secondanother = nullptr;

void insert_second(int val) {

	node* temp = new node;
	temp->data = val;
	temp->next = nullptr;

	if (another == nullptr) {
		another = temp;
		secondanother = another;
	}

	else {

		secondanother->next = temp;
		secondanother = temp;
	}
}

void concatination() { // time complixity O(1).

	cout << "\nafter concatination" << endl;

	second->next = another;// bacause second point on the last node of the first linked list.
	another = nullptr; // another is no more requried. 
}

void display() {

	node* newnode = new node;
	newnode = head;

	std :: cout << "elements in the first linked list are : [ ";
	while (newnode != nullptr) {

		std :: cout << newnode->data << " ";
		newnode = newnode->next;
	}
	std :: cout << "]" << endl;

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


int main() {

	insert(8);
	insert(6);
	insert(9);
	insert(3);
	insert(1);

	insert_second(11);
	insert_second(10);
	insert_second(19);
	insert_second(16);
	insert_second(12);
	insert_second(23);

	display();

	concatination();

	display();

	return 0;
}
