#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter the string\n");
	scanf("%s",str);
	char ptr[100];
	printf("enter the string\n");
	scanf("%s",ptr);
	ustrcat(str,ptr);
	printf("the concatenation string is %s",str);
}
void ustrcat(char*p,char*q){
	while(*p!=0){
		p++;
	}
	while(*q!=0){
		*p=*q;
		p++;
		q++;
	}
	return 0;
}
