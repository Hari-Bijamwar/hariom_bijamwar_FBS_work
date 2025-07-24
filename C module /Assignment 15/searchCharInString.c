#include<stdio.h>
int searchChar(char*,char );
void main()
{
	char str[100];
	printf("\nEnter the string\n");
	scanf("%s",&str);
	char ch;
	printf("\nEnter character that u want to serach\n");
	scanf(" %c",&ch);
int index=	searchChar(str,ch);
if(index!=-1)
{
	printf("\ncharacter found at index %d",index);
}
else
{
	printf("\nprovided character not found");
}
}

int searchChar(char*str,char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			return i;
		
		}
		i++;	
	}
	return -1;
}