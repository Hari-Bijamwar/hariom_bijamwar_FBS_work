#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of an array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Even ");
	for(int i=0;i<n;i++)
	{
	if(arr[i]%2==0)
	{
		printf("%d ",arr[i]);
	}	
	}
	printf("Odd ");
	for(int i=0;i<n;i++)
	{
	if(arr[i]%2!=0)
	{
		printf("%d ",arr[i]);
	}	
	}
}