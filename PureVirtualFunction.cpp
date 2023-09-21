#include <iostream>


using namespace std;



class shape{
	public:
	virtual void parameters()=0;
	virtual void  area()=0;
	
};


class square: public shape{
	int side;
	public:
		void parameters(){
			cout<<"Enter a value of Side: ";
			cin>>side;
	   }
	   
	   void area(){
	   	  cout<<"Area of Square is: "<< side*side<<endl;
	   }
	   
	  
};

class reactangle: public shape{
	int l,b;
	public:
			void parameters(){
			cout<<"Enter a value of Length and breadth: ";
			cin>>l>>b;
	   }
	   
	   void area(){
	   	  cout<<"Area of Square is: "<< l*b<<endl;
	   }
		
};




int main(){
	
	
	
	
	
	cout<<"Stack Section"<<endl;
	square s1;
	shape* ptr=&s1;
    ptr->parameters();
	ptr->area();
	
	cout<<"Heap Section"<<endl;
	square* ptr1=new square();
	ptr1->parameters();
	ptr1->area();
    
    
    
    
    
    return 0;
}
