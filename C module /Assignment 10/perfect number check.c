#include<stdio.h>
void numPerfectOrNot(int*);
void main()
{
			int num;
	printf("Enter the number to check whether it is perfect or not \n");
	scanf("%d",&num);
numPerfectOrNot(&num);
}
void numPerfectOrNot(int* num)
{

	int i=1,sumOfDivisor=0;
	while(i<*num)
	{
		if(*num%i==0)
		{
			sumOfDivisor=sumOfDivisor+i;
		}
		i++;
	}
	if(*num==sumOfDivisor)
	{
		printf("%d is perfect number",*num);
	}
	else
	{
		printf("%d is not perfect number ",*num);
	}
}
