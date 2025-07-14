#include<stdio.h>
void markCategory(int*);
void main()
{
		int marks;
	printf("Enter the marks of a student \n");
	scanf("%d",&marks);
markCategory(&marks);
}
void markCategory(int* marks)
{

	if(*marks>=75)
	{
		printf("Distinction");
	}
	else
	{
		if(*marks>=65 && *marks<75)
		{
			printf("First Class");
		}
		else
		{
			if(*marks>=55 && *marks<65)
			{
				printf("Second Class");
			}
			else
			{
				if(*marks>=40 && *marks<55)
				{
					printf("Pass Class");
				}
				else
				{
					printf("Fail");
				}
			}
		}
	}	
}
