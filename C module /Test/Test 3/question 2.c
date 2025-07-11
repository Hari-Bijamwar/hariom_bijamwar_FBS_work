#include<stdio.h>
void main()
{
	int start,end,i,sum=0;
	printf("Enter the start and end of range \n");
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i=i+2)
	{
		sum=sum+i;
	}
	printf("Addition of alternate numbers in given range is %d ",sum);
}
