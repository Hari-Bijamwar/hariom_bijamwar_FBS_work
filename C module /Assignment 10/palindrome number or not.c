#include<stdio.h>
void numPalindromeChecker(int*);
void main()
{
		int num;
	printf("Enter the number to check whether it is palindrome or not \n");
	scanf("%d",&num);
	numPalindromeChecker(&num);
	
}
void numPalindromeChecker(int* num)
{

	int temp=*num;
	int revNum=0;
	for(;temp>0;)
	{
		int mod=temp%10;
		revNum=revNum*10+mod;
		temp=temp/10;
	}
	if(revNum==*num)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}
