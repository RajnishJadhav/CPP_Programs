#include<iostream>
	#include<string.h>
	using namespace std;
	
	class Complex{
		
		 int real,img;
		 public:
		 	
		 Complex(){
		 	
		 	
		 }
		 Complex(int r, int i){
		 	real=r;
		 	img=i;	
		 	cout<<real;
		 	cout<<img;
		 }
	};
	
	int main(){
		
  Complex c1;
//	c1.display();
 const  Complex c2(6,7);
//	c2.display();
		
	}
