#include<stdio.h>
int isNumPalindrome();
void main()
{
int res=	isNumPalindrome();
if(res==1)
{
	printf("Provided number is palindrome");
}
else if(res==2)
{
	printf("Provided number is not palindrome");
}
else if(res==3)
{
		printf("Enter a valid number");
}
else
{
printf("for this case result can not be evaluated \n");	
}
}
int isNumPalindrome()
{
	int num;
	printf("Enter a 3 digit number to check whether it is palindrome or not \n");
	scanf("%d",&num);
	int duplicateNum=num;
	int reversedNum=0;
	int r1,r2,r3;
	if(num>99 && num<1000)
	{
		r1=duplicateNum%10;
		if(r1==0)
		{
			
			return 0;
		}
		else{
	
		duplicateNum=duplicateNum/10;
		r2=duplicateNum%10;
		r3=duplicateNum/10;
		reversedNum=r1*100+r2*10+r3;
			}		
	}
	else
	{
	return 3;
	}
	
 
	if(num==reversedNum)
	{
		return 1;
		
	}
	else
	{
		return 2;
	}
}
