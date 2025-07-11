#include<stdio.h>
int checkDivisibility(int);
void main()
{
		int num;
	printf("Enter the number \n");
	scanf("%d",&num);
int res=	checkDivisibility(num);
if(res==1)
{
			printf("Number is divisible by both 3 and 5");
}
else if(res==2)
{
	printf("Number is only divisible by 3");
}
else if (res==3)
{
		printf("Number is only divisible by 5");
}
else if(res==4)
{
	printf("Number is not divisible by 3 or 5");
}
}
int checkDivisibility(int num)
{

	if(num%3==0 && num%5==0)
	{
return 1;
	}
	else
	{
		if(num%3==0)
		{
			return 2;
			
		}
		else
		{
			if(num%5==0)
			{
			return 3;
			}
			else
			{
				return 4;
			}
		}
	}
}
