#include<stdio.h>
int factorial(int );

void main()
{
		int num;
	printf("Enter the number for which you want to find factorial \n");
	scanf("%d",&num);
int result=	factorial(num);


printf("Factorial of a given number is %d",result);	

}
int factorial(int num)
{
	int result=1;

	if(num==1 || num==0)
	{
	return 1;
	}
	else
	{
		int temp=num;
		while(temp>=1)
		{
			result=result*temp;
			temp--;
		}
		return result;
	}
}
