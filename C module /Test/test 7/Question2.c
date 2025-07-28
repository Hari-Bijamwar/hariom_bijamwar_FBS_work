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
	
	int start=0;
	int end=n-1;
	int flag=0;
	while(start<=end)
	{
		if(arr[start]!=arr[end])
		{
			flag=1;
			break;
			
		}
		start++;
		end--;
	}
	
	if(flag==0)
	{
		printf("\narray is palindome\n");
	}
	else
	{
		printf("\narray is not palindrome\n");
	}
}