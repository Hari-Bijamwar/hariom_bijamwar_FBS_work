#include<stdio.h>
#include<string.h>
void exchangeChar(char*);
void main()
{
	char str[100];
	printf("\nEnter string\n");
	scanf("%s",str);
	exchangeChar(str);
	printf("\nstring after exchanging 1st and last character is %s\n",str);
}
void exchangeChar(char*str)
{
	int start=0;
	int end=strlen(str)-1;
	
	char temp=str[start];
	str[start]=str[end];
	str[end]=temp;
}