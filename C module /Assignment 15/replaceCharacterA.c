#include<stdio.h>
void replaceChar(char*str);
void main()
{
	char str[100];
	printf("\nEnter string\n");
	scanf("%s",str);
	replaceChar(str);
	printf("\nstring after replacement is %s\n",str);

	
}

void replaceChar(char*str)
{
	int i=0;
	while(str[i]!=0)
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
		i++;
	}
}