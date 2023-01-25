#include<iostream>
using namespace std;

class node {

public :

	int data;
	node* next;
};

node* head = nullptr;
node* new_node;

void insert(int new_data) {

	new_node = new node;

	new_node->data = new_data;
	new_node->next = head;
	head = new_node;

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

bool searching(int val) {

	node* search = new node;
	search = head;

	while (search != nullptr) {

		if (search->data == val) {
			return true;
			break;
		}
		else if (search->data != val) {
			search = search->next;
		}

		else return false;
	}

}

//with move to head
bool search_move_head(int val) {

	node* temp = head;
	node* pre = nullptr;

	while (temp != nullptr) {

		if (temp->data != val) {
			pre = temp;
			temp = temp->next;
		}

		else if (temp->data == val) {
			pre->next = temp->next;
			temp->next = head;
			head = temp;
			return true;
		}

		else return false;
	}
}

int main() {

	insert(4);
	insert(6);
	insert(3);
	insert(2);
	insert(9);
	insert(7);

	cout << "elements in the linked list are : ";
	display();

	cout << boolalpha;
	cout << "value found : ";
	cout << searching(9) << endl;
	cout << "\nsearch move to head" << endl;
	cout << "value found : ";
	cout << search_move_head(6) << endl;
	display();

	return 0;
}