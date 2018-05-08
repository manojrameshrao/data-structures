//============================================================================
// Name        : Sorting.cpp
// Author      : Manoj Ramesh Rao
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void selection_sort(int nums[], int n);
void bubble_sort(int nums[], int n);
void print(int nums[], int n);

int main() {
	cout << "Sorting" << endl; // prints !!!Hello World!!!
	int nums[5] = {3,2,5,1,0};

	selection_sort(nums,5);
	bubble_sort(nums,5);
	print(nums,5);
	return 0;
}

void selection_sort(int nums[], int n){
	for(int i =0;i<n-1;i++){
		int i_min = i;

		for(int j=i+1;j<n;j++){
			if(nums[j]<nums[i_min])
				i_min = j;
		}

		//swapping numbers
		int temp = nums[i];
		nums[i] = nums[i_min];
		nums[i_min] = temp;
	}
}

void print(int nums[], int n){
	for(int i=0; i<n; i++){
		cout<<nums[i]<<"\t";
	}
	cout<<endl;
}

void bubble_sort(int nums[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-2;j++){
			if(nums[i]>nums[i+1]){
				//swap occurs
				int temp =  nums[i];
				nums[i] = nums[i+1];
				nums[i+1] = temp;
			}
		}
	}
}
