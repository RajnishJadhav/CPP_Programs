#include<iostream>
using namespace std;
#include<string.h>

class string1{
	
	int len;
	char *ptr;
	public:
		string1(char *sptr){
			
			len=strlen(sptr);
			ptr=new char[len+1];
			strcpy(ptr,sptr);
		}
		void display(){
			
			cout<<"length is: "<<len<<endl;
			cout<<"String is "<<ptr<<endl;
		}
		~string1(){
			cout<<"Destructor is called "<<this<<endl;
			if(ptr)
			delete[] ptr;
			ptr=NULL;
		}
};

int main(){
	
	string1 c("pratham");
	c.display();
	cout<<"Address of C object is: "<<&c<<endl;
	{
		string1 c1(c);
		c1.display();
		cout<<"Address of C1 object is: "<<&c1<<endl;
//		c1.~string1();
    }

	c.display();
	

}





