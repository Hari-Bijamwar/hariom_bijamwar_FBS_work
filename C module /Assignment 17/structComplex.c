#include<stdio.h>
struct Complex
{
 int real;
 int imag;
 	
};

void main()
{
	struct Complex c1;
	c1.real=5;
	c1.imag=6;
	
	printf("complex number is \n");
	printf("%d + %di\n",c1.real,c1.imag);
	
	struct Complex c2;
	printf("Enter complex number real,imag part\n");
	scanf("%d%d",&c2.real,&c2.imag);
	printf("%d + %di\n",c2.real,c2.imag);
	
}