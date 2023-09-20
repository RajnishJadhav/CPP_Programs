#include<iostream>
using namespace std;

int main(){
	
	char a='x';
	char* b=&a;
	char** c=&b;
	
	cout<<**c<<*b<<a;
	cout<<sizeof(b)<<sizeof(**c)<<sizeof(c)<<sizeof(*b);
}


