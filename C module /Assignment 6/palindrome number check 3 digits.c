#include<stdio.h>
void isNumPalindrome();
void main()
{
	isNumPalindrome();
}
void isNumPalindrome()
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
			printf("for this case result can not be evaluated \n");
			return;
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
		printf("Enter a valid number");
	}
	
 
	if(num==reversedNum)
	{
		printf("Provided number is palindrome");
		
	}
	else
	{
		printf("Provided number is not palindrome");
	}
}
