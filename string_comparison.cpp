#include<iostream>
using namespace std;
#include<string.h>


int main(){
	
	char a[10];
	cout<<"Enter first string: ";
	cin>>a;
	char b[10];
	cout<<"Enter second string: ";
	cin>>b;
	
	if(strcmp(a,b)==0)
	{
		
		cout<<"strings are equal"<<endl;
	}else{
		
		cout<<"strings are not equal"<<endl;
	}
	
	
}


