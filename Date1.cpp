#include<iostream>
using namespace std;

class Dates
{
	int dd;
	int mm;
	int yy;
	public:
	getDate1()
	{
		cout<<"please enter the day\n "<<dd;
		cin>>dd;
	}
	
	 getMonth1()
	{
		cout<<"\nplease enter the month\n "<<mm;
		cin>>mm;
	}
	
	 getYear1()
	{
		cout<<"\nplease enter the year\n "<<yy;
		cin>>yy;
	}
	
	displayDate()
	{
		cout<<"date is: \n"<<dd;	
	}
	displayMonth()
	{
		cout<<"month is: \n"<<mm;	
	}
	displayYear()
	{
		cout<<"\nyear is: \n"<<yy;	
	}
	  void acceptDate(int,int,int);
	  
	  display(){
	  	
	  	cout<<"\n"<<dd<<"/"<<mm<<"/"<<yy<<endl;
	  }
	  
	  void setDay(int s){
		dd=s;
	}
	 int getDay()
	 {
	 	return dd;
	 }
	 void setMonth(int t){
		mm=t;
	}
	int getMonth()
	 {
	 	return mm;
	 }
	 void setYear(int u){
		yy=u;
	}
	int getYear()
	 {
	 	return yy;
	 }
};

 void Dates::acceptDate(int p,int q, int r){
 	
 	dd=p;
 	mm=q;
 	yy=r;
 }
  
  int main()
  {
  	 Dates d;
  	 d.getDate1();
  	 d.displayDate();
  	 
  	 d.getMonth1();
  	 d.displayMonth();
  	
  	 d.getYear1();
  	 d.displayYear();
  	 
  	 
  	 cout<<"\n"<<"size of first date is "<<sizeof(d);
  	 
  	 Dates d1;
  	 d1.acceptDate(12,9,2023);
  	 d1.display();
  	 d1.setDay(1);
  	 d1.setMonth(8);
  	 d1.setYear(1998);
  	 d1.display();
  	 
  	 
  	 
  	 
  	 
  	 
  	return 0;
  }
