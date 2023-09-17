#include<iostream>
using namespace std;

int main(){
	
   int	num,fact=1,i;
	cout<<"Enter a number: ";
	cin>>num;
	while(i<=num){
		
		fact=fact*i;
		i++;
		
	}
	cout<<fact;
}
