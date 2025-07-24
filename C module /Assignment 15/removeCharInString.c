#include<stdio.h>
#include<string.h>
void removeChar(char*,int);
void main()
{
	char str[100];
	printf("Enter the string\n");
	scanf("%s",str);
	int pos;
	printf("\nfor what index u want to remove charcter\n");
	scanf("%d",&pos);
	removeChar(str,pos);
	printf("string after removing is %s",str);
}
void removeChar(char*str,int pos)
{
	int n=strlen(str);
	int i;
	for(i=pos-1;i<n-1;i++)
	{
		str[i]=str[i+1];
	}
	str[i]='\0';
	
}