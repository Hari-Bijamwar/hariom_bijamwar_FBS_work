#include<stdio.h>
void checkCharCase(char);
void main()
{
			char ch;
	printf("Enter the character to check whether it is uppercase or lowercase \n");
	scanf("%c",&ch);
checkCharCase(ch);

}
void checkCharCase(char ch)
{

	if(ch>='a' && ch<='z')
	{
		printf("The given character is lowercase ");
	}
	else
	{
		if(ch>='A' && ch<='Z')
		{
			printf("The given character is uppercase ");
		}
		else
		{
			printf("Enter valid character");
		}
	}
}
