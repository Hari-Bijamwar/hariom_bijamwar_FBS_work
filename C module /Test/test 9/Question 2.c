#include<stdio.h>
void main()
{
	int totalAmount=2000;
	int age[5]={11,59,78,10,30};
	
	for(int i=0;i<5;i++)
	{
	if(age[i]<12)
	{
	float discount	=0.3*totalAmount;
	float payableAmount=totalAmount-discount;
	printf("payable amount of person %d after discount is %f\n",i+1,payableAmount);
	}
	else if(age[i]>59)
	{
	float discount	=0.5*totalAmount;
	float payableAmount=totalAmount-discount;
	printf("payable amount of person %d after discount is %f\n",i+1,payableAmount);	
	}
	else 
	{
		printf("payable amount of person %d after discount is %d\n",i+1,totalAmount);
	}	
	}
}