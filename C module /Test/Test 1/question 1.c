#include<stdio.h>
void main()
{
	int hr,min,sec;
	printf("Enter the number of hours \n");
	scanf("%d",&hr);
	printf("Enter the number of min \n");
	scanf("%d",&min);
	printf("Enter the seconds \n");
	scanf("%d",&sec);
	
	int total_sec =sec+min*60+hr*60*60;
	printf("Total seconds are %d ",total_sec);
}
