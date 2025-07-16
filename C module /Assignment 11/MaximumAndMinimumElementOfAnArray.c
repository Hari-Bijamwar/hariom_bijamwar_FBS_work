#include<stdio.h>
void main()
{
	int n,max,min ;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of an array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	printf("maximum element of an array is %d\n",max);
	printf("minimum element of an array is %d\n",min);
}