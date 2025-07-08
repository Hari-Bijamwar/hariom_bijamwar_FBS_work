#include<stdio.h>
void rangeAddition();
void main()
{
rangeAddition();
}
void rangeAddition()
{
		int start,end;
	printf("enter the start from which you want to perform addition \n");
	scanf("%d",&start);
	printf("enter the end upto which you want to perform addition \n");
	scanf("%d",&end);
	int i=start;
	int sum=0;
	while(i<=end)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of range from %d to %d is %d",start,end,sum);
}
