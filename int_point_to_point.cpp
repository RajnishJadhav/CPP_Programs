#include<iostream>
using namespace std;

int main(){
	
	int a=10;
	int* b=&a;  
	int** c=&b;
	
	cout<<**c<<*b<<a;
	cout<<sizeof(b)<<sizeof(**c)<<sizeof(c)<<sizeof(*b);
}
