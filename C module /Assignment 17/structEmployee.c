#include<stdio.h>
struct Employee{
	int id;
	char name[50];
	int salary;
};
void main()
{
	struct Employee Emp1;
	Emp1.id=1;
	strcpy(Emp1.name,"Adi");
	Emp1.salary=70000;
	
	printf("Employee 1 details are\n");
	printf("EmpId=%d name=%s salary=%d \n",Emp1.id,Emp1.name,Emp1.salary);
	
	struct Employee Emp2;
	printf("Enter details of employee 2 like id,name,salary respectively\n");
//	printf("Enter empId");
	scanf("%d%s%d",&Emp2.id,&Emp2.name,&Emp2.salary);
	printf("EmpId=%d name=%s salary=%d \n",Emp2.id,Emp2.name,Emp2.salary);
	
}