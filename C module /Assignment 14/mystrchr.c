#include<stdio.h>
int myStrchr(char*,char );
void main()
{
	char str[]="rangerover";
	char ch='g';
int index=	myStrchr(str,ch);
if(index!=-1)
{
	printf("\nElement found at index %d",index);
}
else
{
	printf("\nElement not found");
}
}

int myStrchr(char*str,char ch)
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