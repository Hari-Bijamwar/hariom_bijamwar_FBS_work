#include<stdio.h>
#include<string.h>
void removeChar(char*);
void main()
{
	char str[100];
	printf("Enter the string\n");
	scanf("%s",str);
	

		removeChar(str);
	
	printf("string after removing is %s",str);
}
void removeChar(char*str)
{
	int n=strlen(str);
	int temp=n-1;
	
	int i,index=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			str[index]=str[i];
			index++;
		}
		
	}
	
	str[index]='\0';
	
}