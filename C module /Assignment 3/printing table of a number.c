#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number for printing table of that number \n");
	scanf("%d",&num);
	int i=1;
	while(i<=10)
	{
		printf("%d \n",num*i);
		i++;
	}
		
	
}
