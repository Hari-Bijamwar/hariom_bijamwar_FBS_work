#include<stdio.h>
void main()
{
	int base,power;
	printf("Enter base \n");
	scanf("%d",&base);
	printf("Enter power \n");
	scanf("%d",&power);
	
	int result=1;
	for(int i=0;i<power;i++)
	{
		result=result*base;
	}
	printf("Result is %d ",result);
}