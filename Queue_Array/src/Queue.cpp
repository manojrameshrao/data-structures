//============================================================================
// Name        : Queue.cpp
// Author      : Manoj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int f = -1;
int r = -1;
int N=3;
int queue[3];

void enqueue(int x);
void dequeue();
bool is_empty();
bool is_full();
int front();
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

bool is_empty(){
	if(f==-1 && r ==-1)
		return true;
	else
		return false;
}

bool is_full(){
	if((r+1)%N==f)
		return true;
	else
		return false;
}
void enqueue(int x){
	if(is_empty()){
		f=0;
		r=0;
	}else if(is_full()){
		cout<<"Queue is full"<<endl;
	}else{
		r=(r+1)%N;
		//r+=1;
	}
	queue[r]=x;
}

void dequeue(){
	if(is_empty()){
		cout<<"Empty queue"<<endl;
	}
	else if(f==r){
		f=r=-1;
	}else{
		f=(f+1)%N;
	}
}

int front(){
	int front_val=0;
	if(is_empty()){
		cout<<"Empty queue"<<endl;
	}else{
		front_val=queue[f];
	}
		return front_val;
}

void print(){
	if(is_empty())
		cout<<"Empty queue"<<endl;
	else{
		cout<<"Queue Elements"<<endl;
		for(int i=f;i!=r;i=(i+1)%N){
			cout<<queue[i]<<"->";
		}
		cout<<endl;
	}
}

