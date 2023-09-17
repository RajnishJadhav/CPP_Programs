#include<iostream>
using namespace std;

bool isPrime(int a){
	
	for(int i=2;i<a;i++){
		if(a%i==0)
			return false;
	}
       return true;
}
int main(){	 
	 for(int i=2; i<=50; i++)
	 {
	 	if(isPrime(i)){
	 		cout<<i<<" NUmber is prime"<<endl;
		 }
		 else{
		 	cout<<i<<" NUmber is not prime"<<endl;
		 }
	 		
	 }
	 return 0;
}
