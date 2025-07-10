#include<stdio.h>
int checkUserValidForVoting();
void main()
{
 int res=checkUserValidForVoting();
 if(res==1)
 {	printf("elligible for voting ");
 }
 else
 {
 		printf("not elligible for voting");
 }
}
int checkUserValidForVoting()
{
	int age;
	printf("Enter the age \n");
	scanf("%d",&age);
	if(age>=18)
	{
	return 1;
	}
	else
	{
	return 0;
	}	
}
