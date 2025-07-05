#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	int i,j;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
