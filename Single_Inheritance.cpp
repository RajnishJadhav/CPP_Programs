#include<iostream>
using namespace std;


class A{
	
	public:
	A()
	{
		
		cout<<"default of A\n";
	}
	
	void display(){
		
		cout<<"Display of class A\n";
	}
};

class B:public A{
	
	public:
		B(){
			
			cout<<"Default of B\n";
		}
		void display(){
		
		cout<<"Display of class B\n";
	}
};

int main(){
	
	B b;
	b.display();
}
