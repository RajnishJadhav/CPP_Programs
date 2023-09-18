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
		string1(string1 & new_name)
		{
			len = new_name.len;
			ptr = new char[len+1];
			strcpy(ptr,new_name.ptr);
		}
		void display(){
			
			cout<<"length is: "<<len<<endl;
			cout<<"String is "<<ptr<<endl;
		}
		~string1(){
			cout<<"Destructor is called "<<endl;
			if(ptr)
			delete[] ptr;
			ptr=NULL;
		} 
};

int main(){
	
	string1 c("Rajnish");
	c.display();
	{
		string1 c1(c);
		c1.display();
		c1.~string1();
    }

	c.display();
	

}





