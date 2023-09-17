#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,sum= 0;
	int* ptr;
	printf("Enter no of Elements");
	scanf("%d", &n);
	ptr=(int*) malloc(n*sizeof(int));
	printf("Accept elements for array");
	for(i =0; i<n; i++)
	
		scanf("%d",(ptr+i));

	for(i=0 ; i<n; i++)
	
		sum = sum+ *(ptr + i);
		
		printf("summation is %d",sum);
		free(ptr);
}
