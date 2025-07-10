#include<stdio.h>
int choiceOperationOnNum();
void main()
{
	
int res=choiceOperationOnNum();
printf("result of operation is %d ",res);
}

int choiceOperationOnNum()
{
	int num1,num2;
	char ch;
	printf("Enter the 1st number \n");
	scanf("%d",&num1);
	printf("Enter the operation you want to perform \n");
	scanf(" %c",&ch);
	printf("Enter the 2nd number \n");
	scanf("%d",&num2);
	int result;
	if(ch=='+')
	{
	result=num1+num2;	
	}
	else if(ch=='-')
	{
	result=num1-num2;	
	}
	else if(ch=='/')
	{
	result=num1/num2;	
	}
	else if(ch=='*')
	{
	result=num1*num2;	
	}
	else if(ch=='%')
	{
	result=num1%num2;	
	}
	
return result;
}
