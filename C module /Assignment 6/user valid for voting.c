#include<stdio.h>
void checkUserValidForVoting();
void main()
{
checkUserValidForVoting();
}
void checkUserValidForVoting()
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
