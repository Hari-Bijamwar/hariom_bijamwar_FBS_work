#include<stdio.h>
void checkUserValidForVoting(int*);
void main()
{
		int age;
	printf("Enter the age \n");
	scanf("%d",&age);
checkUserValidForVoting(&age);
}
void checkUserValidForVoting(int* age)
{

	if(*age>=18)
	{
		printf("elligible for voting ");
	}
	else
	{
		printf("not elligible for voting");
	}	
}
