	#include<iostream>
	#include<string.h>
	using namespace std;
		int show();
		int count;
	int main(){
	cout<<"the value of first call\n"<<show();
	cout<<"the value of second call\n"<<show();
	cout<<"the value of third call\n"<<show();
	cout<<"\n the count of the show in static  is\n"<<count<<endl;
	}
	int show(){
		static int x=10;
		cout<<"the value of x\n";
		x++;
		count++;
		return x;
		
	}
