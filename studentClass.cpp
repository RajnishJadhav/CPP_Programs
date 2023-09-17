	#include<iostream>
	using namespace std;
	
	class student
	{
		int rollNo;
		int dob;
		int marks;
		
		public:
		void getData()
		{
			cout<<"Enter student roll no : ";
			cin>>rollNo;
			
			cout<<"Enter date of birth in dd/mm/yy : ";
			cin>>dob;
			
			cout<<"Enter total marks : ";
			cin>>marks;
		}
		
		void display()
		{
			cout<<"Roll no is "<<rollNo<<endl<<"Date of birth is "<<dob<<endl<<"Total marks is "<<marks<<endl;
		}
			
	};
	
		int main()
		{
			int i =0;
			student s1[1];
			  for(i=0;i<=1;i++)
			{
			s1[i].getData();
			}
	        for(i=0;i<=1;i++)
	        {
	        s1[i].display();
			}
	
		}
