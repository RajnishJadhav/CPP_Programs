#include <iostream>
using namespace std;

class Student
{
	int m1,m2,roll;
	public:
	
		Student(int a,int b,int r){
			m1=a;
            m2=b;
            roll=r;
		}
		void displayMarks()
		{
            cout<<"first marks are: "<<m1;
            cout<<"second marks are: "<<m2;
			int add = m1+m2;
            cout<<"addition of marks is: "<<add;
            cout<<"Roll no is: "<<roll;
		}
};

class Sportsmarks
{
     int sm;
	public :
		
		 Sportsmarks(int m)
		{
			sm=m;
		}
        void marks(){

            cout<<"sports marks are: "<<sm;
        }
};

class Result: public Student, public Sportsmarks
{
	float avg;
	int total;
	int add,sm;
	public:
		 Result(int i, int j, int k,int l):Student(i,j,k),Sportsmarks(l)
		{
			
		}
        void displayresult(){

              Student::displayMarks();
			Sportsmarks::marks();
			
			 total=add+sm;
		   avg=float(total/3);
			 cout<<"Avg of student is: "<<avg;
        }
};

 int main(){
 	
 	Result r(25,25,5,50);
 	r.displayresult();
 	
 }
