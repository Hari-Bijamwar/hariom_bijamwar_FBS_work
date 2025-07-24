#include<stdio.h>
#include<string.h>
void mystrncat(char*,char*,int);

void main()
{
	char str1[100];
	printf("\nEnter string 1\n");
	scanf("%s",str1);
	char str2[100];
	printf("\nEnter string 2\n");
	scanf("%s",str2);
	int n;
	printf("\nEnter how much characters u want to concatenate\n");
	scanf("%d",&n);
	mystrncat(str1,str2,n);
	printf("concatenated string is %s",str1);
}
void mystrncat(char*str1,char*str2,int n)
{
   
    int len=strlen(str1);
    for(int i=0;i<n;i++)
    {
    	str1[len]=str2[i];
    	len++;
    
	}
	str1[len]='\0';
}