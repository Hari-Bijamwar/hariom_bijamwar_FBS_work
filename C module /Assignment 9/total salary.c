#include<stdio.h>
int salaryCalculation(int);
void main()
{
		int basicSal;
	printf("Enter the basic salary \n");
	scanf("%d",&basicSal);
	int res=salaryCalculation(basicSal);
	printf("Total salary is %d",res);
}
int salaryCalculation(int basicSal)
{

	float da,ta,hra;
	int totalSalary=0;
	if(basicSal<=5000)
	{
		da=0.1*basicSal;
		ta=0.2*basicSal;
		hra=0.25*basicSal;
		totalSalary=basicSal+da+ta+hra;
	}
	else
	{
		da=0.15*basicSal;
		ta=0.25*basicSal;
		hra=0.3*basicSal;
		totalSalary=basicSal+da+ta+hra;
	}
return totalSalary;
}
