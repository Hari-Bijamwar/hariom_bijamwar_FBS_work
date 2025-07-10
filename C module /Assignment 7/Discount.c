#include<stdio.h>
int discount();
void main()
{
int res=discount();
	printf("Final price after discount is %d \n",res);
}
int discount()
{
	int price;
	int discount=0;
	char userInput;
	printf("Enter The Price \n");
	scanf("%d",&price);
	printf("Are you a student press y for yes n for no \n");
	scanf(" %c",&userInput);
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
	int total=price-discount;
	printf("Discount on your product is %d \n",discount);
	return total;

}
