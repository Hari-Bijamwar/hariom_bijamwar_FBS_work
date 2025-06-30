#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age \n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("elligible for voting ");
	}
	else
	{
		printf("not elligible for voting");
	}
}
