#include<stdio.h>

struct SalesManager
{
	int id;
	char name[200];
	int salary;
	int incentive;
	int target;
	
};

void main()
{
	struct SalesManager sm1;
	sm1.id=1;
	strcpy(sm1.name,"hari");
	sm1.salary=12345678;
	sm1.incentive=12345;
	sm1.target=123456;
	
	printf("Sales manager 1 details\n");
	printf("id=%d name=%s salary=%d incentives=%d target=%d\n",sm1.id,sm1.name,sm1.salary,sm1.incentive,sm1.target);
	
	struct SalesManager sm2;
	printf("Enter details id,name,salary,incentives,target\n");
	scanf("%d%s%d%d%d",&sm2.id,&sm2.name,&sm2.salary,&sm2.incentive,&sm2.target);
	printf("id=%d name=%s salary=%d incentives=%d target=%d\n",sm2.id,sm2.name,sm2.salary,sm2.incentive,sm2.target);
	
	
}