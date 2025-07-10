#include<stdio.h>
int markCategory();
void main()
{
int result=markCategory();
if(result==1)
{
		printf("Distinction");
}
else if(result==2)
{
	printf("First Class");
}
else if(result==3)
{
printf("Second Class");	
}
else if(result==4)
{
	printf("Pass Class");	
}
else
{
		printf("Fail");
}
}
int markCategory()
{
	int marks;
	printf("Enter the marks of a student \n");
	scanf("%d",&marks);
	if(marks>=75)
	{
	return 1;
	}
	else
	{
		if(marks>=65 && marks<75)
		{
			return 2;
		}
		else
		{
			if(marks>=55 && marks<65)
			{
				return 3;
			}
			else
			{
				if(marks>=40 && marks<55)
				{
				return 4;
				}
				else
				{
				return 5;
				}
			}
		}
	}	
}
