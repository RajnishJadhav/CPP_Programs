#include<iostream>
using namespace std;
//pass by reference
void swap(int&,int&);
 int main(){
      int a=50;
	  int b=20;
	  cout<<"before swaping"<<a<<b<<endl;

	  swap(a,b);
	  cout<<"after swaping"<<a<<b<<endl;
	  return 0;
 }
 void swap(int&p,int&q){
 	   int temp=p;
    	p=q;
 	    q=temp;
 }
