#include<stdio.h>
void checkEvenOdd(int*);
void main()
{
		int num ;
	printf("enter the number to check whether it is odd or not \n");
	scanf("%d",&num);
checkEvenOdd(&num);
}
void checkEvenOdd(int* num)
{

	if(*num%2==0)
	{
		printf("number is even ");
	}
	else
	{
		printf("number is odd");
	}
}
