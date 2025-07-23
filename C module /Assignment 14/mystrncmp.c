#include<stdio.h>
#include<string.h>
int mystrncmp(char*,char*,int );
void main()
{
	char str1[100];
	printf("\nEnter the 1st string to compare\n");
	scanf("%s",str1);
	char str2[100];
	printf("\nEnter the 2nd string to compare\n");
	scanf("%s",str2);
	int n;
	printf("\nEnter value of n\n");
	scanf("%d",&n);
	
int res=mystrncmp(str1,str2,n);

if(res==0)
{
	printf("\nboth are equal");
}
else if(res==-1)
{
	printf("\nstring 2 is greater");
	
}
else if(res==1)
{
	printf("\nstring 1 is greater");
}
else
{
	printf("\nerror");
}
	
}

int mystrncmp(char*str1,char*str2,int n)
{
		for(int i=0;i<n;i++)
	{
		if(str1[i]>str2[i])
		return 1;
		else if(str1[i]<str2[i])
		return -1;
	}
	return 0;
}