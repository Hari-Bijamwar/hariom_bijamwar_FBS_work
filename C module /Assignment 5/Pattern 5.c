#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n-i+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
