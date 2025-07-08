#include<stdio.h>
void checkTriangleType();
void main()
{
checkTriangleType();
}
void checkTriangleType()
{
		float s1,s2,s3;
	printf("Enter the sides of triangle \n");
	scanf("%f %f %f",&s1,&s2,&s3);

    if(s1==s2==s3)
	{
		printf("triangle is equilateral triangle");
	}
	else if(s1==s2 || s1==s3 || s2==3)
	{
		printf("triangle is isoscales triangle \n");
	}
	else
	{
		printf("triangle is scalene triangle \n");
	}
}
