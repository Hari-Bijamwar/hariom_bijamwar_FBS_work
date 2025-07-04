#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number to check if it is positive,negetive,zero \n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Number is positive \n");
	}
	else if(num==0)
	{
		printf("Number is zero");
	}
	else
	{
		printf("Number is negetive");
	}
}
