//============================================================================
// Name        : StringReversal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

struct Node{
	char data;
	Node* next;
};
void push(char element);
void pop();
int top();
void print();
bool is_empty();
Node* head = NULL;

int main() {
	cout << "WORD" << endl;
	push('W');
	push('O');
	push('R');
	push('D');
	print();
	return 0;
}

void push(char element){
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
		cout << temp->data;
		temp = temp->next;
	}
	cout << endl;
}
