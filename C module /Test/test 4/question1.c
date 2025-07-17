#include<stdio.h>
void main()
{
	int start,end;
	printf("Enter start of range \n");
	scanf("%d",&start);
	printf("Enter end of range \n");
	scanf("%d",&end);
	for(int i=start;i<=end;i++)
	{
			printf("%d =",i);
		for(int j=1;j<=end;j++)
		{
		if(i%j==0)
		{
			printf("%d ",j);
		}
	
	
   }
		printf("\n");
	}
}