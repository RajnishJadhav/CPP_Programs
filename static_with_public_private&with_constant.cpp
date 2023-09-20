#include<iostream>
using namespace std;

class Complex{
	
	  int real,img;
	  public:
	  	static const int cnt;
	  	private:
	  	static const int cnt1;
	  	public:
	  		Complex(){
	  			
	  			
	  			cout<<"default is invoked\n";
	  			real=5;
	  			img=5;
			  }
			   static int getcnt(){
			  	
			  	return cnt1;
			  }
};

const int Complex::cnt=5;
const int Complex::cnt1=10;

 int main(){
 	
 	Complex c1;
 	cout<<"no of object created is: \n"<<Complex::getcnt();
 	cout<<"\nsizeof object is: \n"<<sizeof(c1);
 cout<<"\nvalue of private static const is: \n"<<Complex::cnt;
 return 0;
 }
		
