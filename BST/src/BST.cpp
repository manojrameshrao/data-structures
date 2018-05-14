//============================================================================
// Name        : BST.cpp
// Author      : Manoj Ramesh Rao
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct BST_node{
	int data;
	BST_node* left;
	BST_node* right;
};

bool search(BST_node* root, int data);
BST_node* insert(BST_node* root,  int data);
BST_node* create_node(int data);

bool search(int nums[],int ele, int size);

void  print_tree(BST_node* root);

int main() {
	cout << "BST" << endl; // prints !!!Hello World!!!

	int nums[7]={1,2,3,4,5,6,7};
	if(search(nums,9,7)){
		cout<<"FOund"<<endl;
	}

	/*BST_node* root = NULL;

	root = insert(root,15);
	root = insert(root,12);
	root = insert(root,19);
	root = insert(root,21);
	root = insert(root,25);
	root = insert(root, 11);

	search(root, 12);
	search(root,26);*/
	return 0;
}

BST_node* create_node(int data){
	BST_node* newNode = new BST_node();
	newNode->data = data;
	newNode->left = newNode->right=NULL;

	return newNode;
}


BST_node* insert(BST_node* root, int data){
	if(root==NULL){
		root = create_node(data);

	}else if(data <= root->data){
		root->left = insert(root->left,data);
	}else{
		root->right = insert(root->right,data);
	}

	return root;
}

bool search(BST_node* root, int data){
	if(root==NULL){
		cout<<data<<" Not found"<<endl;
		return false;
	}else if(data == root->data){
		cout<<data<<" is present"<<endl;
		return true;
	}else if(data<=root->data){
		return search(root->left,data);
	}else{
		return search(root->right,data);
	}
}

bool search(int nums[],int ele, int size){
	int mid_index = size/2;

	if(!(mid_index>0 && mid_index<size)){
		return false;
	}else if(nums[mid_index] == ele){
		return true;
	}else if(ele <= mid_index){
		size = mid_index;
		return search(nums,ele,size);
	}else{
		size += mid_index;
		return search(nums,ele,size);
	}
}
