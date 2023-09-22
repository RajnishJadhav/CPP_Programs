#include<iostream>
using namespace std;


    class A{
    	
    	public: 
    	A(){
    		
    		cout<<"base class of Constructor A is called: "<<endl;
    	}
    		~A(){
    			
    			cout<<"base of Destructor A is called: "<<endl;
			}
	};
	
	class B:public A{
		
		
		public: 
		
		   B(){
    		
    		cout<<"base class of Constructor B is called: "<<endl;
    	}
    		~B(){
    			
    			cout<<"base class Destructor B is called: "<<endl;
			}
	};
	
	class C:public A{
		
		public:
			C(){
    		
    		cout<<"base class of Constructor C is called: "<<endl;
    	}
    		~C(){
    			
    			cout<<"base of Destructor C is called: "<<endl;
			}
	};
	
	int main(){
		
		
		C c;
		B b;
	return 0;
	}
