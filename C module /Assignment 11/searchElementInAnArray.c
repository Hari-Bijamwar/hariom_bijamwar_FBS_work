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
	printf("\nEnter the element that u want to search in an array \n");
	int element;
	scanf("%d",&element);
	int flag=0,index=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			index=i;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Element not found in an array\n");
	}
	else
	{
		printf("Element found at index %d ",index);
	}
}