#include<stdio.h>
void main()
{
   int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	int brr[n];
	int crr[n];
	printf("\nEnter the elements of an array 1\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the elements of an array 2\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
	for(int i=0;i<n;i++)
	{
	 crr[i]=arr[i]+brr[i];
	}
	printf("\nsum of two array is \n");
		for(int i=0;i<n;i++)
	{
	printf("%d ",crr[i]);
	}
}