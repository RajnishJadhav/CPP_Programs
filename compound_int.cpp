#include<iostream>
using namespace std;
#include<math.h>



int main(){
	float prin,rate,time,ci;
	cout<<"Enter principle: ";
	cin>>prin;
	cout<<"Enter rate: ";
	cin>>rate;
	cout<<"Enter time :"; 
	cin>>time;
	
ci = prin*pow((1+rate/100),time)-prin;
	cout<<"Compound Interest is: "<<ci;
}
