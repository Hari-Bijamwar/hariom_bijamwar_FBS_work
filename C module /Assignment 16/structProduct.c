#include<stdio.h>
#include<string.h>
struct Product
{
	int id;
	char name[100];
	int quantity;
	int price;
};
void main()
{
	struct Product p1;
	p1.id=3;
	strcpy(p1.name,"mouse");
	p1.quantity=100;
	p1.price=500;
	
	printf("Product Details \n");
	printf("id=%d name=%s quantity=%d price=%d\n",p1.id,p1.name,p1.quantity,p1.price);
	
	struct Product p2;
	printf("Enter product details such as id,name,quantity,price\n");
	scanf("%d%s%d%d",&p2.id,&p2.name,&p2.quantity,&p2.price);
	printf("id=%d name=%s quantity=%d price=%d\n",p2.id,p2.name,p2.quantity,p2.price);

	
	
}