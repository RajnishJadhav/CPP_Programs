#include<iostream>
	using namespace std;
	
	
	class Implementation{
		
		
		int a,b;
		
		public:
		Add(int p, int q){
			
			a=p;
			b=q;
		}
		
		void disp(){
			
			cout<<a+b;
		}
	};
	int main(){
		
	  Implementation a(10,20);
	  a.disp();	
		
	}
