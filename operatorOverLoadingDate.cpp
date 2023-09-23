#include<iostream>
using namespace std;

class Date{
	
	int dd,mm,yy;
	
	public:
		
		friend Date operator+(Date& ,int );
	//	friend Date operator-(Date& ,int );
		Date(){
			
			dd=mm=yy=0;
		}
		Date(int d,int m,int y){
			dd=d;
			mm=m;
			yy=y;
		//	cout<<dd<<mm<<yy;
		}
//		Date operator+(int num){
//			
//			Date temp;
//			
//			temp.dd=dd+num;
//			temp.mm=mm+num;
//			temp.yy=yy+num;
//			return temp;
//		}
		Date operator-(int num){
			
			Date temp;
			
			temp.dd=dd-num;
			temp.mm=mm-num;
			temp.yy=yy-num;
			
		}
		void display()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		
};

Date operator+(Date& c,int num)
{
	Date temp;
	temp.dd=c.dd + num;
	temp.mm=c.mm + num;
	temp.yy=c.yy +num;
//   cout<<temp.dd<<"/"<<temp.mm<<"/"<<temp.yy<<endl;
   return temp;

}



  int main(){
  	
  	Date d1(23,9,2023);
  	Date d2=d1+2;
    d2.display();
  	
  }


