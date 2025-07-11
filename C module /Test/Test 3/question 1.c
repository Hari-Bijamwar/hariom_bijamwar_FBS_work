#include<stdio.h>
void main()
{
	int start,end,i,j;
	printf("Enter the start of range to find even and odd numbers in that range \n");
	scanf("%d",&start);
	printf("Enter the end of range to find even and odd numbers in that range \n");
	scanf("%d",&end);
	
	printf("even: ");
	for( i=start;i<=end;i++)
	{
		
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\nodd: ");
	for( j=start;j<=end;j++)
	{
		if(j%2!=0)
		{
			printf(" %d ",j);
		}
	}
}
