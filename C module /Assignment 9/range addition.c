#include<stdio.h>
int rangeAddition(int,int);
void main()
{
			int start,end;
	printf("enter the start from which you want to perform addition \n");
	scanf("%d",&start);
	printf("enter the end upto which you want to perform addition \n");
	scanf("%d",&end);
int sum=rangeAddition(start,end);
	printf("sum of range is %d",sum);
}
int rangeAddition(int start,int end)
{

	int i=start;
	int sum=0;
	while(i<=end)
	{
		sum=sum+i;
		i++;
	}
return sum;
}
