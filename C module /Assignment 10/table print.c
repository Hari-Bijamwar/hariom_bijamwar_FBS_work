#include<stdio.h>
void prinTable(int*);
void main()
{
			int num;
	printf("Enter the number for printing table of that number \n");
	scanf("%d",&num);
	prinTable(&num);
	
}
void prinTable(int* num)
{

	int i=1;
	while(i<=10)
	{
		printf("%d \n",*num*i);
		i++;
	}
	
}
