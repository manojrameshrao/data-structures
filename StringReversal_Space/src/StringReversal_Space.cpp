//============================================================================
// Name        : StringReversal_Space.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char c[100];
	cout << "Enter string" << endl;
	cin>>c;
	int i=0;
	int j = strlen(c)-1;

	while(i<j){
		char temp = c[i];
		c[i]=c[j];
		c[j]=temp;
		i++;
		j--;
	}
	cout<<c;
	return 0;
}
