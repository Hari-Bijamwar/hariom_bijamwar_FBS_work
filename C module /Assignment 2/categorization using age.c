#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age \n");
	scanf("%d",&age);
	if(age>=60)
	{
		printf("Senior");
	}
	else
	{
		if(age>=20 && age<=59)
		{
			printf("Adult");
		}
		else
		{
			if(age>=12 && age<=19)
			{
				printf("Teenager");
			}
			else
			{
				if(age>=0 && age<12)
				{
					printf("Child");
				}
				else
				{
					printf("Invalid age");
				}
			}
		}
	}
}
