#include<stdio.h>
int checkLeapYear();
void main()
{
int res=checkLeapYear();
if(res==1)
{
	printf("year is leap ");
}
else
{
	printf("year is not leap ");
}
}
int checkLeapYear()
{
	int year;
	printf("Enter the year to check whether it is leap or not \n");
	scanf("%d",&year);
	if(year%4==0 && year%100 !=0 ||year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
