#include<stdio.h>
int numPalindromeChecker();
void main()
{
int res=	numPalindromeChecker();
	if(res==1)
	{
		printf("Palindrome");	
	}
	else
	{
		printf("Not Palindrome");
	}
}
int numPalindromeChecker()
{
	int num;
	printf("Enter the number to check whether it is palindrome or not \n");
	scanf("%d",&num);
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
