#include<stdio.h>
void storeArray(int *,int );
void sumOfArrayElements(int*,int );
void main()
{
	int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int *arr=malloc(sizeof(int)*n);
storeArray(arr,n);
sumOfArrayElements(arr,n);
}
void storeArray(int *arr,int n)
{
	printf("\nEnter the elements of an array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
}
void sumOfArrayElements(int*arr,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of array is %d ",sum);
}