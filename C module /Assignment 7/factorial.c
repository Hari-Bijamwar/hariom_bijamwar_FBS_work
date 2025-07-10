#include<stdio.h>
int factorial();

void main()
{
int result=	factorial();


printf("Factorial of a given number is %d",result);	

}
int factorial()
{
	int num,result=1;
	printf("Enter the number for which you want to find factorial \n");
	scanf("%d",&num);
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
