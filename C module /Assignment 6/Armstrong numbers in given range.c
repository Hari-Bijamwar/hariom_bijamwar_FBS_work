#include<stdio.h>
void armstrongNumInRange();
void main()
{
armstrongNumInRange();
	
}
void armstrongNumInRange()
{
		int start,end;
	printf("Enter start of the range \n");
	scanf("%d",&start);
	printf("Enter end of the range \n");
	scanf("%d",&end);
	int num;
	for(num=start;num<=end;num++)
	{
	int count=0,sum=0;
	int temp=num;
	
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	temp=num;
	while(temp>0)
	{
		int mod=temp%10;
		temp=temp/10;
		int i=0,result=1;
		while(i<count)
		{
		result= result*mod;
			i++;
			
		}
		sum=sum+result;
		
	}
	if(sum==num)
	{
		printf("%d ",num);
	}

	}
}
