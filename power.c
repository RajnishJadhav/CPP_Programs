#include<stdio.h>

int main()
{	
	int m=2;
	int n=4;
	int temp=1,i;	
	for(i=0;i<n;i++){
		temp=temp*m;	
	}
	printf("the value of %d to the power %d is %d",n,m,temp);
}


