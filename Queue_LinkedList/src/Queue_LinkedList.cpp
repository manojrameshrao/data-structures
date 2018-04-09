//============================================================================
// Name        : Queue_LinkedList.cpp
// Author      : Manoj Ramesh Rao
// Version     :
// Copyright   : 
// Description : Queue Implementation in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x);
void dequeue();
int front_val();
bool is_empty();
void print();

int main() {
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(7);
	print();
	dequeue();
	enqueue(9);
	print();

	return 0;
}

void enqueue(int x){
	Node* temp =  new Node();
	temp->data = x;
	temp->next = NULL;
	if(front == NULL && rear == NULL){
		front = temp;
		rear = temp;
	}else{
		rear->next = temp;
		rear = temp;
	}

}

void dequeue(){
	Node* temp = front;
	if(front==NULL){
		cout<<"Queue is empty"<<endl;
	}else if(front == rear){
		front = rear = NULL;
	}else{
		front = front->next;
	}
	delete temp;
}

bool is_empty(){
	if(front==NULL && rear == NULL)
		return true;
	else
		return false;
}

int front_val(){
	return front->data;
}

void print(){
	Node* temp =front;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<endl;
}

