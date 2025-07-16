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
	for(int i=0;i<n;i+=2)
	{
		printf("%d ",arr[i]);
	}
}