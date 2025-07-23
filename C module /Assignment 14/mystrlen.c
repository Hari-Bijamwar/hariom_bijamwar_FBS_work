#include<stdio.h>
int mystrlen(char*);
void main()
{
	char str1[]="RangeRover";
int res=mystrlen(str1);
printf("Length of string is %d",res);
}


int mystrlen(char*str1)
{

int i=0;	
while(str1[i]!='\0')
{
	i++;
}
return i;
}