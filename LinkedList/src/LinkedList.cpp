//============================================================================
// Name        : LinkedList.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Linked List Implementation
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

//Structure for singly-linked list
struct Node{
	int data;
	struct Node* next;
};

void insert_at_start(Node** head, int x);
void print(Node** head);
void insert_at_pos(Node** head, int ele_to_insert, int pos);
void reverse(Node** head);
void delete_at_pos(Node** head, int pos);

int main() {
	Node* head = NULL;
	int n=0,ele;
	//int array[5]={1,2,3,4,5};

	cout << "Enter number of elements" << endl; // prints !!!Hello World!!!
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0; i<n;i++){
		cin>>ele;
		insert_at_start(&head,ele);

		//cout<<endl;
	}
	print(&head);
	cout<<"Enter position to delete"<<endl;
	cin>>n;
	delete_at_pos(&head,n);
	print(&head);
	return 0;
}

void insert_at_start(Node** head, int x){
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data=x;
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

void insert_at_pos(Node** head, int ele_to_insert, int pos){
	struct Node* prev = *head;
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data=ele_to_insert;
	if(pos==1){
		temp->data=ele_to_insert;
		temp->next=*head;
		*head=temp;
	}else{
		for(int i=0;i<pos-2;i++){
			prev=prev->next;
		}
		temp->next=prev->next;
		prev->next=temp;
	}

}

void delete_at_pos(Node** head, int pos){
	struct Node* prev = *head;

	if(pos==1){
		*head = prev->next;
		delete prev;
	}else{
		for(int i=0;i<pos-2;i++){
			prev=prev->next;
		}

		Node* temp = prev->next;
		prev->next=temp->next;
		delete temp;
	}
}

void reverse(Node** head){

}


