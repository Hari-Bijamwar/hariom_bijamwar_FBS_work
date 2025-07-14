#include<stdio.h>
void perfectNumInRange(int* , int*);
void main()
{		int start,end;
	printf("Enter the start of range \n");
	scanf("%d", &start);
	printf("Enter the end of range \n");
	scanf("%d",&end);
perfectNumInRange(&start,&end);
}
void perfectNumInRange(int* start,int* end)
{

	
	int num;
	for( num=*start;num<=*end;num++)
	{
	int j=1,sumOfDivisor=0;
	while(j<num)
	{
		if(num%j==0)
		{
			sumOfDivisor=sumOfDivisor+j;
		}
		j++;
	}
	if(num==sumOfDivisor)
	{
		printf("%d ",num);
	}
	}
}
