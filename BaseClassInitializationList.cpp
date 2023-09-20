#include<iostream>
using namespace std;


class A{
	
	int a;
	public:
	A()
	{
		
		cout<<"default of A\n";
	}
	A(int a){
		cout<<"In para of A\n";
		this->a=a;
	}
	
	void display(){
		
		cout<<"Display of class A\n";
		cout<<"Value of a: "<<a<<endl;
	}
};

class B:public A{
	
	int b;
	public:
		B(){
			
			cout<<"Default of B\n";
		}
		B(int b):A(10)     //base class initialization list//allowed only for constructor
		 {
			cout<<"In para of B\n";
			this->b=b;
			
		}
		void display(){
			A::display();
		cout<<"Display of class B"<<endl;
		cout<<"Value of b: "<<b<<endl;
		
	}
};

int main(){
	
	B b(20);
	b.display();
	cout<<"size of object B is: "<<sizeof(b);
}
