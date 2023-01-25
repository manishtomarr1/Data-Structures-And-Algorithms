#include<iostream>
#include<vector>
using namespace std;

class node {

public :

	int data;
	node* next;
};

node* head = nullptr;
node *last = nullptr;

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

bool checkcircular() { // time O(n)

	node* temp = new node;
	node* tempan = new node;
	temp = head;
	tempan = head;

	do{

      temp = temp->next;
	  tempan = tempan->next;

	  if (tempan != nullptr) { // means that second pointer not exceed last node
		  tempan = tempan->next;//if it is not exceed move it to next node.
	  }
	  else
		  tempan = nullptr; // if exceed it is assigned as null

	  if (temp == tempan)
		  return true;

	} while (temp && tempan);

	return false;
}

int main() {

	insert(7);
	insert(12);
	insert(23);
	insert(25);
	insert(32);

	cout << boolalpha;
	cout << checkcircular() << endl;

	return 0;

}