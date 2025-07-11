#include<stdio.h>
int checkEvenOdd(int);
void main()
{
		int num ;
	printf("enter the number to check whether it is odd or not \n");
	scanf("%d",&num);
int res=checkEvenOdd(num);
if(res==1)
{
	printf("number is even ");	
}
else
{
	printf("number is odd");
}
}
int checkEvenOdd(int num)
{

	if(num%2==0)
	{
	return 1;
	}
	else
	{
		return 2;
	}
}
