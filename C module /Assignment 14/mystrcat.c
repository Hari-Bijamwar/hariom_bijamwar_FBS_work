#include<stdio.h>
#include<string.h>
void mystrcat(char*,char*);

void main()
{
	char str1[100];
	printf("\nEnter string 1\n");
	scanf("%s",str1);
	char str2[100];
	printf("\nEnter string 2\n");
	scanf("%s",str2);

	mystrcat(str1,str2);
	printf("concatenated string is %s",str1);
}
void mystrcat(char*str1,char*str2)
{
   
    int len=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len2;i++)
    {
    	str1[len]=str2[i];
    	len++;
    
	}
	str1[len]='\0';
}