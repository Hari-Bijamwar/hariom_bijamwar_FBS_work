#include<stdio.h>
void greaterAmongThree(int*,int*,int*);
void main()
{
		int a,b,c;
	printf("Enter 1st number \n");
	scanf("%d",&a);
	printf("Enter 2nd number \n");
	scanf("%d",&b);
	printf("Enter 3rd number \n");
	scanf("%d",&c);
	greaterAmongThree(&a,&b,&c);
}
void greaterAmongThree(int *a, int *b, int *c)
{

	if(*a>*b )
	{
		if(*a>*c)
		{
		printf("%d is greater among 3 numbers",*a);
		}
	    else
	    {
	    	printf("%d is greater among 3 numbers",*c);
		}
	}
	else
	{
		if(*b>*c)
		{
			printf("%d is greater among 3 numbers",*b);
		}
		else
		{
			printf("%d is greater among 3 numbers",*c);
		}
	}
}
