#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of an array \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
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