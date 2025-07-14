#include<stdio.h>
void numberPrint(int*);
int main()
{
	int n;
	printf("enter the number upto which you want numbers to be printed \n");
	scanf("%d",&n);
	
numberPrint(&n);
}
void numberPrint(int* n)
{
		int i=1;
while(i<=*n)
	{
		printf("%d ",i);
		i++;
	}
}
