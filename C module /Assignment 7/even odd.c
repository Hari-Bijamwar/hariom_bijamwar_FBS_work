#include<stdio.h>
int checkEvenOdd();
void main()
{
int res=checkEvenOdd();
if(res==1)
{
	printf("number is even ");	
}
else
{
	printf("number is odd");
}
}
int checkEvenOdd()
{
	int num ;
	printf("enter the number to check whether it is odd or not \n");
	scanf("%d",&num);
	if(num%2==0)
	{
	return 1;
	}
	else
	{
		return 2;
	}
}
