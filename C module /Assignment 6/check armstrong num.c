#include<stdio.h>
void checkArmstrongNum();
void main()
{
	checkArmstrongNum();
}
void checkArmstrongNum()
{
	int num,sum=0;
	printf("Enter the nummber to check if it is Armstrong number or not \n");
	scanf("%d",&num);
	int temp=num;
	int count=0;
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
		printf("Number is Armstrong number");
	}
	else
	{
		printf("Number is not Armstrong number");
	}
}
