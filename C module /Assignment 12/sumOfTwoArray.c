#include<stdio.h>
void storeArray(int*,int );
void SumOfTwoArray(int*,int*,int );
void main()
{
   int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	int brr[n];

storeArray(arr,n);
storeArray(brr,n);
SumOfTwoArray(arr,brr,n);
}
void storeArray(int*arr,int n)
{
	printf("\nEnter the elements of an array \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void SumOfTwoArray(int*arr,int*brr,int n)
{	int crr[n];
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