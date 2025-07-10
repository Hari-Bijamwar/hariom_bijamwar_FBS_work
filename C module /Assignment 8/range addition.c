#include<stdio.h>
void rangeAddition(int,int);
void main()
{
			int start,end;
	printf("enter the start from which you want to perform addition \n");
	scanf("%d",&start);
	printf("enter the end upto which you want to perform addition \n");
	scanf("%d",&end);
rangeAddition(start,end);
}
void rangeAddition(int start,int end)
{

	int i=start;
	int sum=0;
	while(i<=end)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of range from %d to %d is %d",start,end,sum);
}
