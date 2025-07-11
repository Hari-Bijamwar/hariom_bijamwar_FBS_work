#include<stdio.h>
int checkCharCase(char);
void main()
{
		char ch;
	printf("Enter the character to check whether it is uppercase or lowercase \n");
	scanf("%c",&ch);
int res=checkCharCase(ch);
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
int checkCharCase(char ch)
{

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
