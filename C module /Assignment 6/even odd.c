#include<stdio.h>
void checkEvenOdd();
void main()
{
checkEvenOdd();
}
void checkEvenOdd()
{
	int num ;
	printf("enter the number to check whether it is odd or not \n");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("number is even ");
	}
	else
	{
		printf("number is odd");
	}
}
