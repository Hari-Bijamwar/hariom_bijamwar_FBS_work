#include<stdio.h>
void checkLeapYear();
void main()
{
checkLeapYear();
}
void checkLeapYear()
{
	int year;
	printf("Enter the year to check whether it is leap or not \n");
	scanf("%d",&year);
	if(year%4==0 && year%100 !=0 ||year%400==0)
	{
		printf("year is leap ");
	}
	else
	{
		printf("year is not leap ");
	}	
}
