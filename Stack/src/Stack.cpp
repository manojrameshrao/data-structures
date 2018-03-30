//============================================================================
// Name        : Stack.cpp
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
void push(int element);
void pop();
int top();
bool is_empty();
Node* head = NULL;

void print();

int main() {
	int n=0,ele;

	cout << "Enter number of elements" << endl; // prints !!!Hello World!!!
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0; i<n;i++){
		cin>>ele;
		push(ele);
	}
	print();
	pop();
	print();
	return 0;
}

void push(int element){
	Node* temp = new Node();
	temp->data=element;
	temp->next=head;
	head = temp;
}

void pop(){
	Node* temp = head;
	if(head==NULL)return;
	head = head->next;
	delete temp;
}

int top(){
	return head->data;
}

bool is_empty(){
	if(head!=NULL)
		return true;
	else
		return false;
}

void print(){
	Node* temp =head;
	while (temp!= NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << endl;
}

