#include<stdio.h>
void deposit(int ,int );
void withdraw(int ,int );
int main()
{
int accountAmount=5000;
int choice;
printf("Enter 1 to deposit amount \nEnter 2 to withraw amount\n");
scanf("%d",&choice);
if(choice==1)
{
	int depositAmount;
	printf("\nHow much amount you want to deposit in your account\n");
	scanf("%d",&depositAmount);
	deposit(accountAmount,depositAmount);
}
else if(choice==2)
{
	int withdrawAmount;
	printf("\nHow much amount you want to withdraw from your account\n");
	scanf("%d",&withdrawAmount);
	withdraw(accountAmount,withdrawAmount);
}
else
{
	printf("\n Enter a valid operation \n");
}
}
void deposit(int amount,int depositAmount)
{
	int total=amount+depositAmount;
	printf("Total amount in account is %d\n",total);	
}
void withdraw(int amount,int withdrawAmount)
{
	if(amount<3000 || withdrawAmount>amount || amount-withdrawAmount<3000)
	{
		printf("\n Insufficient balance\n");
	}
	else
	{
		int total=amount-withdrawAmount;
		printf("\nTotal balance in account is %d\n",total);
	}
}
