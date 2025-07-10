#include<stdio.h>
void strongNumberInRange(int,int);
void main()
{
			int start,end;
	printf("Enter start of the range \n");
	scanf("%d",&start);
	printf("Enter end of range \n");
	scanf("%d",&end);
strongNumberInRange(start,end);
}
void strongNumberInRange(int start,int end)
{

	int num;
	for(num=start;num<=end;num++)
	{
	int temp=num;
	int total=0;
	int result;
	
	while(temp>0)
	{
		int mod =temp%10;
		if(mod==1 || mod==0)
		{
			result=1;
			total=total+result;
		}
		else
		{
			int i=mod;
			result=1;
			while(mod>=1)
			{
				result=result*mod;
				mod--;
			}
			total=total+result;
		}
		temp=temp/10;
	}
	if(total==num)
	{
		printf("%d ",num);
	}

	}
}
