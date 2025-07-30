#include<stdio.h>
void storeArray(int*,int);
void checkEvenOdd(int*,int);
void main()
{
	int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int *arr=(int*)malloc(sizeof(int)*n);
	storeArray(arr,n);
	checkEvenOdd(arr,n);
	

}
void storeArray(int*arr,int n)
{
	printf("\nEnter the elements of an array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void checkEvenOdd(int*arr,int n)
{
	
	printf("Even ");
	for(int i=0;i<n;i++)
	{
	if(arr[i]%2==0)
	{
		printf("%d ",arr[i]);
	}	
	}
	printf("\nOdd ");
	for(int i=0;i<n;i++)
	{
	if(arr[i]%2!=0)
	{
		printf("%d ",arr[i]);
	}	
	}
}