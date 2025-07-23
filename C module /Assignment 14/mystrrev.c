#include<stdio.h>
#include<string.h>
void mystrrev(char*);
void main()
{
char str[]="rangerover";
mystrrev(str);
printf("reversed string is %s",str);
}

void mystrrev(char*str)
{
	int start=0;
	int end=strlen(str)-1;
	
	
	while(start<=end)
	{
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}

}