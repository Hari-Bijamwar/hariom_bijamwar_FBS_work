#include<stdio.h>
void firstLastDigitSum(int*);
void main()
{
		int num;
	printf("Enter the number to check sum of first and last digit of it \n");
	scanf("%d",&num);
	firstLastDigitSum(&num);
}
void firstLastDigitSum(int* num)
{
	int revNum=0;

	int temp=*num;
	while(temp>0)
	{
		int mod=temp%10;
		revNum=revNum*10+mod;
		temp=temp/10;
	}
	int i =1;

	int firstDigit=*num%10;
	int lastDigit=revNum%10;
	printf("Addition of first and last digit of given number is %d ",firstDigit+lastDigit);
}
