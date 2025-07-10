#include<stdio.h>
int checkCharCase();
void main()
{
int res=checkCharCase();
if(res==1)
{
	printf("The given character is lowercase ");
}
else if(res==2)
{
	printf("The given character is uppercase ");
}
else
{
	printf("Enter valid character");
}

}
int checkCharCase()
{
	char ch;
	printf("Enter the character to check whether it is uppercase or lowercase \n");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		return 1;
	}
	else
	{
		if(ch>='A' && ch<='Z')
		{
			return 2;
			
		}
		else
		{
			return 0;
		}
	}
}
