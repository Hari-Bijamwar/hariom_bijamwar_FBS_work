#include<stdio.h>
struct Date
{
	int date;
	int month;
	int year;
	
};
void main()
{
	struct Date D1;
	D1.date=22;
	D1.month=2;
	D1.year=2000;
	
	printf("date=%d month=%d year=%d\n",D1.date,D1.month,D1.year);
	struct Date D2;
	printf("Enter date ,month,year\n");
	scanf("%d%d%d",&D2.date,&D2.month,&D2.year);
	printf("date=%d month=%d year=%d\n",D2.date,D2.month,D2.year);
	
}