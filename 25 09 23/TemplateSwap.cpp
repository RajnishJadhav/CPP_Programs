#include<iostream>
using namespace std;


template <class T>

T swap(T a,T b){
	cout<<"Before swapping"<<a<<b;
	T temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swpping"<<a<<b;
}

int main(){
	swap(10,20);	
}
