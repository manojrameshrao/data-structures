//============================================================================
// Name        : AddTwoNums.cpp
// Author      : Manoj Ramesh Rao
// Version     :
// Copyright   : 
// Description : Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//				 Output: 7 -> 0 -> 8
//				 Explanation: 342 + 465 = 807.
//============================================================================

#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node *l1, *l2;
Node* add(Node** list1, Node** list2);
void insert(Node** list, int ele);
void print(Node** list);

int main() {
	cout << "!!!Hello World!!!" << endl;
	insert(&l1,3);
	insert(&l1,4);
	insert(&l1,2);
	insert(&l1,1);

	insert(&l2,4);
	insert(&l2,6);
	insert(&l2,5);

	Node* result = add(&l1,&l2);
	print(&result);
	return 0;
}

Node* add(Node** list1, Node** list2){
	Node* res = NULL;

	Node* temp = *list1;
	int sum1 =0, sum2 = 0;
	int mul =1;
	while(temp!=NULL){

		sum1+= (temp->data)*mul;
		mul*=10;
		temp = temp->next;

	}
	cout<<"Num1: "<<sum1<<endl;
	temp = *list2;
	mul =1;
	while(temp!=NULL){

		sum2+= (temp->data)*mul;
		mul*=10;
		temp = temp->next;

	}

	cout<<"Num2: "<<sum2<<endl;

	int total_sum = 0;
	total_sum = sum1 + sum2;

	cout<<"Total: "<<total_sum<<endl;

	//cout<<"Total: "<<total_sum%10<<endl;

	while(total_sum >0){
		insert(&res,total_sum%10);
		total_sum/=10;
	}

	return res;
}

void insert(Node** list, int ele){
	Node* temp = new Node();
	temp->data = ele;
	temp->next = *list;
	*list = temp;
}

void print(Node** list){
	Node* temp = *list;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}
