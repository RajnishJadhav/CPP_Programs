#include <iostream>
using namespace std;
#include <string.h>

class Student
{
	int dd, mm ,yy, roll,totMarks;
	string name;
	public:
		void getData()
		{
			cout<<"Enter your name : ";
			cin>>name;
			
			cout<<"Enter your DOB : ";
			cin>>dd>>mm>>yy;
			
			cout<<"Enter your Roll No : ";
			cin>>roll;
			
			cout<<"Enter your total marks : ";
			cin>>totMarks;
		}
		
		void putData()
		{
			cout<<"Name is: "<<name<<" DOB is "<<dd<<mm<<yy<<" Roll no is "<<roll<<" Total marks is "<<totMarks<<endl;
		}
		
//		void setName(string n)
//		{
//			name = n;
//		}
//		
//		void setRoll(int r)
//		{
//			roll=r;
//		}
//		
//		void settotMarks(int t)
//		{
//			totMarks=t;
//		}
//		
//		void setDob(int d,int m, int y)
//		{
//			dd=d;
//			mm=m;
//			yy=y;
//		}
//		
//		string getName()
//		{
//			return name;
//		}
		int getRoll()
		{
			return roll;
		}
//		int gettotMarks()
//		{
//			return totMarks;
//		}
//		int getDob()
//		{
//			cout<<dd<<"/"<<mm<<"/"<<yy;
//		}
//		
};
int main()
{
	Student s1[10],temp;
	int i,j,n;
	cout<<"Enter number of students : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s1[i].getData();
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s1[i].getRoll()>s1[j].getRoll())
				{
	
			       temp=s1[i];
			       s1[i]=s1[j];
			       s1[j]=temp;
		        }
		}
		
	}
	for(i=0;i<n;i++){
		
		s1[i].putData();
	}
	
}
