#include<stdio.h>
void checkLeapYear(int);
void main()
{
		int year;
	printf("Enter the year to check whether it is leap or not \n");
	scanf("%d",&year);
checkLeapYear(year);
}
void checkLeapYear(int year)
{

	if(year%4==0 && year%100 !=0 ||year%400==0)
	{
		printf("year is leap ");
	}
	else
	{
		printf("year is not leap ");
	}	
}
