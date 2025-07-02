#include<stdio.h>
void main()
{
	int num,count=0,dividingNum=1;
	printf("Enter the number to check sum of first and last digit of it \n");
	scanf("%d",&num);
	int temp=num;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	int i =1;
	while(i<count)
	{
		dividingNum=dividingNum*10;
		i++;
	}
	int firstDigit=num%10;
	int lastDigit=num/dividingNum;
	printf("Addition of first and last digit of given number is %d ",firstDigit+lastDigit);
}
