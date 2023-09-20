#include<iostream>
using namespace std;
class Date
{ 
    
    	int dd;
	    int mm;
     	int yy;
     public:
		void getData(){
			cout<<"Enter date"<<endl;
			cin>>dd>>mm>>yy;
		}
		void display(){
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
			
		}
		void acceptip(int,int,int);
		
		
};
void Date::acceptip(int d,int m,int y){
	dd = d;
	mm = m;
	yy = y;
}
int main(){
    Date d1;
    cout<<"sizeof d1 object"<<sizeof(Date)<<endl;
    d1.getData();
    d1.display();
    d1.acceptip(12,10,2002);
    d1.display();
    
    return 0;
}

