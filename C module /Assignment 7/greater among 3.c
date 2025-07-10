#include<stdio.h>
int greaterAmongThree();
void main()
{
	int result =greaterAmongThree();
		printf("%d is greater among 3 numbers",result);

}
int greaterAmongThree()
{
	int a,b,c;
	printf("Enter 1st number \n");
	scanf("%d",&a);
	printf("Enter 2nd number \n");
	scanf("%d",&b);
	printf("Enter 3rd number \n");
	scanf("%d",&c);
	if(a>b )
	{
		if(a>c)
		{
		return a;
		}
	    else
	    {
	    	return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
		return c;
		}
	}
}
