#include<stdio.h>
void mystrncpy(char*,char*,int);
void main()
{
	char str1[10]="";
	char str2[10]="range";
	int n;
	printf("\nHow many characters you want to copy\n");
	scanf("%d",&n);
	mystrncpy(str1,str2,n);
	printf("After copying string 2 is %s",str1);
}
void mystrncpy(char*str1,char*str2,int n)
{
	for(int i=0;i<n;i++)
	{
		str1[i]=str2[i];
	}
}