#include<stdio.h>
void provideSellingPrice(float , float );
int main()
{
	float sp,cp,discount;
	printf("Enter the cost price of an item \n");
	scanf("%f",&cp);
	printf("Enter discount percentage 10% , 20% , 30%\n");
	scanf("%f",&discount);
	
	provideSellingPrice(cp,discount);
}

void provideSellingPrice(float cp, float discount)
{
	float sp;
	if(discount==10)
	{
		sp=cp-cp*(discount/100);
		printf("selling price is %f",sp);
	}
	else if(discount==20)
	{
		sp=cp-cp*(discount/100);
		printf("selling price is %f",sp);
	}
	else if(discount==30)
	{
		sp=cp-cp*(discount/100);
		printf("selling price is %f",sp);
	}
	else
	{
		printf("Enter only 10%,20%,30%");
	}
}
