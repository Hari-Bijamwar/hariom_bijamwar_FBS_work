#include<stdio.h>
int choiceOperationOnNum(int,int,char);
void main()
{
	int num1,num2;
	char ch;
	printf("Enter the 1st number \n");
	scanf("%d",&num1);
	printf("Enter the operation you want to perform \n");
	scanf(" %c",&ch);
	printf("Enter the 2nd number \n");
	scanf("%d",&num2);	
int res=choiceOperationOnNum(num1,num2,ch);
printf("result of operation is %d ",res);
}

int choiceOperationOnNum(int num1,int num2,char ch)
{

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
