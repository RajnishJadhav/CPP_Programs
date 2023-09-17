#include<iostream>
using namespace std;

int main()
{
	
	int row;
	cout<<"Enter rows ";
	cin>>row;
	char a='A';
	for(int i = 1; i<=row; i++)
	{
		for(int col= 1; col<=row-i+1; col++)
		{
			cout<<a;
		}
		cout<<endl;
		a+=1;
	}
	return 0;
}
