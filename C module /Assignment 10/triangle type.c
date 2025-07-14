#include<stdio.h>
void checkTriangleType(float*,float*,float*);
void main()
{
			float s1,s2,s3;
	printf("Enter the sides of triangle \n");
	scanf("%f %f %f",&s1,&s2,&s3);
checkTriangleType(&s1,&s2,&s3);
}
void checkTriangleType(float* s1,float* s2,float* s3)
{


    if(*s1==*s2==*s3)
	{
		printf("triangle is equilateral triangle");
	}
	else if(*s1==*s2 || *s1==*s3 || *s2==*s3)
	{
		printf("triangle is isoscales triangle \n");
	}
	else
	{
		printf("triangle is scalene triangle \n");
	}
}
