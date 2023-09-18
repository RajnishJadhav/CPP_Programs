#include<iostream>
using namespace std;


class date{
	
	int dd,mm,yy;
	
	public:
		date(int,int,int);
		void show(){
			
			cout<<"date is: "<<dd<<" Month is "<<mm<<" Year is "<<yy<<endl;
		}
		date(date &d_new){ //user defined copy constructer // for customization purpose
		
		dd=d_new.dd;
		mm=d_new.mm;
		yy=2022;
	}
};
date::date(int d,int m,int y){
	
	dd=d;
	mm=m;
	yy=y;
	
}


int main(){
	
	date d(18,9,2023);
	d.show();
	date d1(d);
	d1.show();
}    
