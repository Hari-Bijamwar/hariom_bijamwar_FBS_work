#include<stdio.h>
void main()
{
	int n,count=1;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
}
