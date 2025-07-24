#include<stdio.h>
void compareLenOfTwoString(char*,char*);

void main()
{
	char str1[100];
	printf("\nEnter string1\n");
	scanf("%s",str1);
	char str2[100];
	printf("\nEnter string2\n");
	scanf("%s",str2);
    compareLenOfTwoString(str1,str2);
}

void compareLenOfTwoString(char*str1,char*str2)
{
	int n1=0,n2=0,i=0;
	while(str1[i]!='\0')
	{
		n1++;
		i++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		n2++;
		i++;
	}
	
	if(n1>n2)
	{
		printf("\nstring 1 is greater in length than string 2\n");
	}
	else if(n1<n2)
	{
		printf("\nstring 2 is greater in length than string 1\n");
	}
	else
	{
		printf("\nBoth string have same length\n");
	}
}