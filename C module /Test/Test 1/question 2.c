#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year to check if it is leap or not \n");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("Year is leap");
	}
	else
	{
		printf("year is not leap ");
	}
}
