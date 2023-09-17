#include <iostream>
using namespace std;

int main(){
	
int n,sum=0;
cout<<"Enter a no of subjects: ";
cin>>n;

int size;
cout<<"Enter your name size: ";
cin>>size;

int* marks=new int[n];
char* name=new char[size+1];
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter "<<n<<"marks";

for(int i=0;i<n;i++){
	cin>>marks[i];
	sum+=marks[i];
}

cout<<name<<"total marks is "<<sum<<" and average is "<<sum/n<<endl;

delete[] marks;
delete[] name;
return 0;
}
