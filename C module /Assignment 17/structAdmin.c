#include<stdio.h>
struct Admin
{
	int id;
	char name[60];
	int salary;
	int allowance;
	
};
void main()
{
	struct Admin ad1;
	ad1.id=1;
	strcpy(ad1.name,"ved");
	ad1.salary=3456;
	ad1.allowance=123;
	
	printf("Admin 1 details \n");
	printf("AdminId=%d AdminName=%s AdminSalary=%d AdminAllowance=%d\n",ad1.id,ad1.name,ad1.salary,ad1.allowance);
	
	struct Admin ad2;
	printf("Enter id ,name,salary,allowance\n");
	scanf("%d%s%d%d",&ad2.id,&ad2.name,&ad2.salary,&ad2.allowance);
	printf("Admin 2 details \n");
	printf("AdminId=%d AdminName=%s AdminSalary=%d AdminAllowance=%d\n",ad2.id,ad2.name,ad2.salary,ad2.allowance);
	
	
}