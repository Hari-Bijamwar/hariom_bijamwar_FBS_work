#include<stdio.h>
int numPalindromeChecker(int);
void main()
{
		int num;
	printf("Enter the number to check whether it is palindrome or not \n");
	scanf("%d",&num);
int res=	numPalindromeChecker(num);
	if(res==1)
	{
		printf("Palindrome");	
	}
	else
	{
		printf("Not Palindrome");
	}
}
int numPalindromeChecker(int num)
{

	int temp=num;
	int revNum=0;
	for(;temp>0;)
	{
		int mod=temp%10;
		revNum=revNum*10+mod;
		temp=temp/10;
	}
	if(revNum==num)
	{
	return 1;
	}
	else
	{
		return 2;
	}
}
