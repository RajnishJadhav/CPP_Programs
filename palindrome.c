#include<stdio.h>
#include<string.h>
int main(){
	int result;
	char c[]="mok";
//	printf("enter the string\n");
//	scanf("%s",c);
	char d[]="mom";
//	printf("enter the string\n");
//	scanf("%s",d);
	strcpy(d,c);
	strrev(c);
	if (strcmp(c,d)==0){
		printf("Palindrome");
	}
	else{
		printf("NOt Palindrome");
	}
	return 0;
}
