#include<iostream>
using namespace std;
//#include<string.h>

   
void usrCpy(char *, char *);
   int main()
   {
   	  char a[10];
   	  char b[20];
   	  
   	   cout<<"Enter a string\n";
   	   cin>>a;
   	   usrCpy(b,a);
   	   cout<<"copied string is: "<<b;
   	
   	
   }  
   
      void usrCpy(char *q , char *p){
      	
      int i;
      
      for(i=0;q[i]='\0';i++)
	  {
      	*q=*p;
	  }
	  *q='\0';
	  }
   
   
