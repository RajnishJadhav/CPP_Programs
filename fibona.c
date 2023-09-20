#include<stdio.h>
#include<string.h>

int main(){
	
	int n;
	printf("enter the no to fabino\n");
	scanf("%d",&n);
	int a=0,b=1,c,i;
	for( i=0;i<=n;i++){
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	
	
}
