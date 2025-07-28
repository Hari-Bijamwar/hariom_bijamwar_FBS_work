#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter array elements\n");
	
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int num1,num2;
	printf("\nEnter 1st elemnt to change position\n");
	scanf("%d",&num1);
	printf("\nEnter 2nd elemnt to change position\n");
	scanf("%d",&num2);
	
	int temp=arr[num1-1];
	arr[num1-1]=arr[num2-1];
	arr[num2-1]=temp;
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}