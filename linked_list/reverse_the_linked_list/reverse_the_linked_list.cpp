#include<iostream>
#include<vector>
using namespace std;

class node {

public :
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
		last = head;
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

void reverse_element() { //time complexity is O(n)

	vector<int> vec; //storing the elements of linked list.
	node* temp = new node;
	temp = head;

	while (temp != nullptr) {

		vec.push_back(temp->data);
		temp = temp->next;

	}

	temp = head;
	int i = vec.size();

	while (temp != nullptr) {
		
		temp->data = vec.at(i-1);
		temp = temp->next;
		i--;

	}

}
void reverse_links() {

	node* p ; // we take p q r for reverse node.
	p = head;
	node* q = nullptr;
	node* r = nullptr;

	while (p != nullptr) {

		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	head = q;

}



int main() {

	insert(8);
	insert(3);
	insert(9);
	insert(2);

	display();

	reverse_element();
	display();

	reverse_links();
	display();

	return 0;

}