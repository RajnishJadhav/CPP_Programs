//print table using while loop
#include<iostream>
using namespace std;
int main()
{  int num,i=1;
    cout<<"enter the number"<<endl;
    cin>>num;
	while(i<=10)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
		i++;
	}
}
