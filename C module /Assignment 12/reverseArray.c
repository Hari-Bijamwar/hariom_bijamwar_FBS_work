#include<stdio.h>
void storeArray(int*,int );
void reverseArray(int*arr,int n);
void main()
{
	int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	storeArray(arr,n);
	reverseArray(arr, n);

	
}
void storeArray(int*arr,int n)
{
		printf("\nEnter the elements of an array \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void reverseArray(int*arr,int n)
{
	int start=0,end=n-1;
while(start<=end)
{
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
}
printf("Reversed array is ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}