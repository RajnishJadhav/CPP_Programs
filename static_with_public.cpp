#include<iostream>
using namespace std;



class Complex{
	private:
		static int cnt1;
	public:
		static int cnt;
		int real,img;
		Complex(){
			cout<<"default is invoked";
			real=5;
			img=10;
			cnt++;
		}
		Complex(int real, int img){
			
			cout<<"parameter is invoked";
			this->real=real;
			this->img=img;
			cnt++;
		}
		
		static int getcnt(){
			
			return cnt;
		}
		
};

int Complex::cnt=0;



   int main(){
   	
   	Complex c1;
   	cout<<Complex::getcnt();
   	
//	cout<<sizeof(c1);
	cout<<Complex::cnt;   
		  
		  }
