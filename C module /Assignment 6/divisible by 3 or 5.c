#include<stdio.h>
void checkDivisibility();
void main()
{
	checkDivisibility();
}
void checkDivisibility()
{
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
	{
		printf("Number is divisible by both 3 and 5");
	}
	else
	{
		if(num%3==0)
		{
			printf("Number is only divisible by 3");
			
		}
		else
		{
			if(num%5==0)
			{
				printf("Number is only divisible by 5");
			}
			else
			{
				printf("Number is not divisible by 3 or 5");
			}
		}
	}
}
