#include<stdio.h>
int checkTriangleType();
void main()
{
int res=checkTriangleType();
if(res==1)
{
		printf("triangle is equilateral triangle");
}
else if(res==2)
{
	printf("triangle is isoscales triangle \n");
}
else
{
		printf("triangle is scalene triangle \n");
}
}
int checkTriangleType()
{
	float s1,s2,s3;
	printf("Enter the sides of triangle \n");
	scanf("%f %f %f",&s1,&s2,&s3);

    if(s1==s2==s3)
	{
	 return 1;
	}
	else if(s1==s2 || s1==s3 || s2==3)
	{
		return 2;
	}
	else
	{
	return 0;
	}
}
