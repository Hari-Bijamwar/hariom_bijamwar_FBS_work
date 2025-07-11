#include<stdio.h>
int numPerfectOrNot(int);
void main()
{
			int num;
	printf("Enter the number to check whether it is perfect or not \n");
	scanf("%d",&num);
int res=numPerfectOrNot(num);
if(res==1)
{
printf("  perfect number");	
}
else
{
	printf("not perfect number ");	
}
}
int numPerfectOrNot(int num)
{

	int i=1,sumOfDivisor=0;
	while(i<num)
	{
		if(num%i==0)
		{
			sumOfDivisor=sumOfDivisor+i;
		}
		i++;
	}
	if(num==sumOfDivisor)
	{
		return 1;
	}
	else
	{
	return 2;
	}
}
