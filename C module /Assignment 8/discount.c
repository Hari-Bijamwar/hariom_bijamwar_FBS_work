#include<stdio.h>
void discount(int,char);
void main()
{
	int price;
	char userInput;
	printf("Enter The Price \n");
	scanf("%d",&price);
	printf("Are you a student press y for yes n for no \n");
	scanf(" %c",&userInput);
discount(price,userInput);
}
void discount(int price,char userInput)
{
		
	int discount=0;
	
	if(userInput=='y')
	{
		if(price>500)
		{
			discount=0.20*price;
		}
		else
		{
			discount=0.10*price;
		}
	}
	else
	{
		if(price>600)
		{
			discount=0.15*price;
		}
	}
	
	printf("Discount on your product is %d \n",discount);
	printf("Final price after discount is %d \n",price-discount);
}
