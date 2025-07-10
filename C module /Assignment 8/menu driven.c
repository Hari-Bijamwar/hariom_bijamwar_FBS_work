#include<stdio.h>
void menuDriven(int ,int);
void main()
{
			int num,operation;
	printf("Enter the number for which you want to perform operations \n");
	scanf("%d",&num);
	printf("Press 1 to check if number is even or odd. \nPress 2 to check number is prime or not. \nPress 3 to check number is pallindrome or not. \nPress 4 To check number is positive, negative or zero.\nPress 5 To reverse a number.\nPress 6 To find sum of digits.\n");
    scanf("%d",&operation);
menuDriven(num,operation);
}
void menuDriven(int num,int operation)
{

    if(operation==1)
    {
    if(num%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}	
	}
	else if(operation==2)
	{
		int i,flag=0;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("number is not prime");
		}
		else
		{
			printf("number is prime");
		}
	}
	else if(operation==3)
	{
		int temp=num;
		int revNumber=0;
		while(temp>0)
		{
			int mod=temp%10;
			revNumber=revNumber*10+mod;
			temp=temp/10;
		}
		if(num==revNumber)
		{
			printf("Number is palindrome");
		}
		else
		{
			printf(" Number is not palindrome");
		}
	}
	else if(operation==4)
	{
		if(num>0)
		{
			printf("Entered number is positive");
		}
		else if(num==0)
		{
			printf("Entered number is zero");
		}
		else
		{
			printf("Entered number is negetive");
		}
	}
	else if(operation==5)
	{
		int temp=num;
		int revNumber=0;
		while(temp>0)
		{
			int mod=temp%10;
			revNumber=revNumber*10+mod;
			temp=temp/10;
		}
		printf("Reverse of %d is %d ",num,revNumber);
	}
	else if(operation==6)
	{
		int temp=num,sum=0;
		while(temp>0)
		{
			int mod=temp%10;
			sum=sum+mod;
			temp=temp/10;
		}
		printf("Sum of digits of entered number is %d\n",sum);
	}
	else
	{
		printf("Enter a valid option");
	}
}
