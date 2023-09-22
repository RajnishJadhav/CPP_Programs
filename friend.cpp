#include<iostream>
using namespace std;


class Hello{
	  
	  int a=10;
	public:
		void show();
		friend void shows(Hello &);  // declaration of friend function 
		
};

 void shows(Hello & t1){
 	cout<<"friend function"<<endl;
 	t1.a=t1.a+5;
 	                                                                                                                              
 }
 
 void Hello::show(){
 	cout<<"value of a "<<a;
 }
 
 int main()
 {
 	
 	Hello h;
 	shows(h);
 	h.show();
 }
