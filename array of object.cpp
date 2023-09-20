	#include<iostream>
	#include<string.h>
	using namespace std;
	class Student{
		int roll_no;
		char name[50];
		double fee;
		public:
			void getData();
			void putData();
	};
void Student::getData(){
	cout<<"enter the roll_no: ";
	cin>>roll_no;
	cout<<"enter the name: ";
	cin>>name;
	cout<<"enter the fee: ";
	cin>>fee;	
}
void Student::putData(){
	cout<<" "<<roll_no<<" "<<name<<" "<<fee<<endl;
}

int main(){
Student s1[50];
int n,i;
cout<<"enter the number of students\n";
cin>>n;

for(i=0;i<n;i++){
	s1[i].getData();
	
}
  cout<<"student information is\n";

for(i=0;i<n;i++){
	s1[i].putData();
}

}
