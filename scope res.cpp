#include<iostream>
 using namespace std;
 class Hello{	
 	int sal;
 	int id;
 	public:
 		void get();
		void display(); 
 };
 
  void Hello::get(){
  	cin>>sal;
  	cin>>id;
  }
  void Hello::display(){
  	cout<<"salary is: "<<sal<<endl;
  	cout<<" id is: "<<id<<endl;
  }
  int main(){
  	Hello h;
  	h.get();
  	h.display();
  }
