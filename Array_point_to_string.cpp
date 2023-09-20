#include<iostream>
using namespace std;

int main()
{
	
//	char* names[5]={"rohan","ram","rahul","rohit","rachana"};
	char* names[5];
	char a[10];
	cout<<"Enter the five names\n";
	for(int i=0;i<5;i++){
	  cin>>a;
	  names[i]=a;
	}
	
	for(int i=0;i<5;i++)
	{
		int j=0;
		cout<<names[i]<<endl;
		cout<<(names+i)<<endl;
		cout<<*(names+i)<<endl;
	
		for(;j<=5;j++)
		{
			cout<<*(*(names+i)+j);
			cout<<endl;
	    }
    }
}
