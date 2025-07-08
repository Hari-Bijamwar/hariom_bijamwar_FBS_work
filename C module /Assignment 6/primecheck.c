#include<stdio.h>
void primeCheck();
void main()
{
primeCheck();
}

void primeCheck()
{
		int num;
	printf("Enter the number to check if number is prime or not prime \n");
	scanf("%d",&num);
	int i=2;
	int flag=0;
	while(i<num)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1)
	{
		printf("Entered number is not prime \n");
	}
	else
	{
		printf("Entered number is prime");
	}
}
