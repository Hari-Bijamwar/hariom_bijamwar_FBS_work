#include<stdio.h>
void storeArray(int *,int );
void alternatePrint(int*,int );
void main()
{
    int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of an array\n");
	storeArray(arr,n);
	alternatePrint(arr,n);


}

void storeArray(int *arr,int n)
{
		for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void alternatePrint(int*arr,int n)
{
		for(int i=0;i<n;i+=2)
	{
		printf("%d ",arr[i]);
	}
}