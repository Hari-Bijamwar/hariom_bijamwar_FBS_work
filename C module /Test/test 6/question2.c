#include<stdio.h>
void storeArray(int*,int );
void main()
{
	
	int n;
	printf("Enter the size of array \n");
	scanf("%d",&n);
	int arr[n];
	storeArray(arr,n);
	int max=arr[0],secondMax;
	
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			secondMax=max;
			max=arr[i];
		}
		else if(arr[i]>secondMax && arr[i]!=max)
		{
			secondMax=arr[i];
		}
	}
	
	printf("Maximum element of an array is %d\n",max);
	printf("Second maximum element of an array is %d\n",secondMax);
	
}
void storeArray(int*arr,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}