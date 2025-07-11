#include<stdio.h>
int ageCategory(int);
void main()
{
		int age;
	printf("Enter the age \n");
	scanf("%d",&age);
int res=ageCategory(age);
	if(res==1)
	{
			printf("Senior");
	}
	else if(res==2)
	{
			printf("Adult");
	}
	else if(res==3)
	{
			printf("Teenager");
	}
	else if(res==4)
	{
			printf("Child");
	}
	else
	{
		printf("Invalid Age");
	}
	
}
int ageCategory(int age)
{

	if(age>=60)
	{
	return 1;
	}
	else
	{
		if(age>=20 && age<=59)
		{
		return 2;
		}
		else
		{
			if(age>=12 && age<=19)
			{
			return 3;
			}
			else
			{
				if(age>=0 && age<12)
				{
				return 4;
				}
				else
				{
					return 0;
				}
			}
		}
	}
}
