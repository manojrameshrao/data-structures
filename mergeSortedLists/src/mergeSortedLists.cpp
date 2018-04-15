//============================================================================
// Name        : mergeSortedLists.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head1 =  NULL;
Node* head2 = NULL;

Node* mergeTwoLists();
void insert(Node** head, int element);
void print(Node** head);

int main() {
	cout << "List 1: "; // prints !!!Hello World!!!
	insert(&head1, 14);
	insert(&head1, 13);
	insert(&head1, 12);
	insert(&head1, 11);
	print(&head1);

	cout << "List 2: "; // prints !!!Hello World!!!
	insert(&head2, 5);
	insert(&head2, 4);
	insert(&head2, 2);
	insert(&head2, 1);
	print(&head2);
	cout<<"Merged List"<<endl;
	Node* res = mergeTwoLists();
	print(&res);
	return 0;
}

Node* mergeTwoLists(){

	Node* curr1 = head1;
	Node* curr2 =  head2;
	Node *next1,*next2;

	while(curr1!=NULL || curr2!=NULL){
		next1 = curr1->next;
		next2 = curr2->next;

		curr1->next = curr2;
		curr2->next = next1;

		curr1=next1;
		curr2=next2;
	}
	return head1;
}

void insert(Node** head, int element){
	struct Node* temp = new Node();
	temp->data=element;
	temp->next=*head;
	*head=temp;
}

void print(Node** head){
	struct Node* temp = *head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<endl;
}
