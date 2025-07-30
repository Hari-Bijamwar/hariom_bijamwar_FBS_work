#include<stdio.h>
struct Hr
{
	int id;
	char name[60];
	int salary;
	int comission;
};
void main()
{
	struct Hr H1;
	H1.id=1;
	strcpy(H1.name,"hari");
	H1.salary=12345678;
	H1.comission=4567;
	
	printf("Hr 1 details\n");
	printf("Id=%d name=%s salary=%d comission=%d\n",H1.id,H1.name,H1.salary,H1.comission);
	struct Hr H2;
	printf("Enter details id,name,salry,comission\n");
	scanf("%d%s%d%d",&H2.id,&H2.name,&H2.salary,&H2.comission);
		printf("Hr 2 details\n");
	printf("Id=%d name=%s salary=%d comission=%d\n",H2.id,H2.name,H2.salary,H2.comission);
}