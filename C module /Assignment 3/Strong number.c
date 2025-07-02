#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number to check if it is strong number or not \n");
	scanf("%d",&num);
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
		printf("%d is strong number \n",num);
	}
	else
	{
		printf("Number is not strong number \n");
	}
}
