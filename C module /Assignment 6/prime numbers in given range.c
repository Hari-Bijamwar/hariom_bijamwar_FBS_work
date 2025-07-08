#include<stdio.h>
void primeNumbersInRange();
void main()
{

	primeNumbersInRange();
}
void primeNumbersInRange()
{
		int start,end;
	printf("Enter the start of range prime numbers \n");
	scanf("%d",&start);
	printf("Enter the end of range prime numbers \n");
	scanf("%d",&end);
	int i,j;
	for( i=start;i<=end;i++)
	{
		int flag=0;
		if(i==1)
		{
			flag=1;
		}
		else
		{
		for( j=2;j<i;j++)
		{
			if(i%j==0 )
			{
				flag=1;
				break;
			}
		}
		}

		if(flag==0)
		{
			printf("%d ",i);
		}
	}
}
