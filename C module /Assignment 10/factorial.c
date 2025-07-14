#include<stdio.h>
void factorial(int*);

void main()
{
		int num;
	printf("Enter the number for which you want to find factorial \n");
	scanf("%d",&num);
	factorial(&num);
}
void factorial(int* num)
{
	int result=1;

	if(*num==1 || *num==0)
	{
		printf("Factorial of a given number is 1");
	}
	else
	{
		int temp=*num;
		while(temp>=1)
		{
			result=result*temp;
			temp--;
		}
		printf("Factorial of a given number is %d",result);
	}
}
