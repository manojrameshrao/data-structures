//============================================================================
// Name        : ArrayRotation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int size;
	int k;
	cout << "Enter array size" << endl; // prints !!!Hello World!!!
	cin>>size;
	int nums[size];
	cout<<"Enter numbers"<<endl;
	for(int i=0; i<size;i++){
		cin>>nums[i];
	}

	cout<<"Enter steps to rotate"<<endl;
	cin>>k;

	for(int i=0;i<k;i++){
		int temp = nums[size-1];
		for(int j=(size-1); j>0;j--){
			nums[j]=nums[j-1];
		}
		nums[0]=temp;
	}

	cout<<"Enter steps to rotate"<<endl;
	cout<<"[";
	for(int i=0; i<size;i++){
		cout<<nums[i]<<",";
	}
	cout<<"]";
	return 0;
}
