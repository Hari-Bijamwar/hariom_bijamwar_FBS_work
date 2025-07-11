#include<stdio.h>
int checkUserValidForVoting(int);
void main()
{
		int age;
	printf("Enter the age \n");
	scanf("%d",&age);
 int res=checkUserValidForVoting(age);
 if(res==1)
 {	printf("elligible for voting ");
 }
 else
 {
 		printf("not elligible for voting");
 }
}
int checkUserValidForVoting(int age)
{

	if(age>=18)
	{
	return 1;
	}
	else
	{
	return 0;
	}	
}
