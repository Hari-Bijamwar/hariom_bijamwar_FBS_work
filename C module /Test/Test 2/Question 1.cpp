#include<stdio.h>
int main()
{
	int unit;
	printf("Enter the number of units \n");
	scanf("%d",&unit);
	int price;
	if(unit<=50)
	{
	price=unit*30;
	}
	else if(unit>50 && unit<=150)
	{
		price=unit*40;
	}
	else if(unit>150)
	{
			price=unit*50;
	}
	
	printf("Price to pay is %d ",price);
}
