#include<stdio.h>
void main()
{
    int n1;
	printf("Enter the size of an array\n");
	scanf("%d",&n1);
	int arr[n1];
	printf("\nEnter the elements of an array 1\n");
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&arr[i]);
	}
	int n2;
	printf("Enter the size of an array\n");
	scanf("%d",&n2);
	int brr[n1];
	printf("\nEnter the elements of an array 2\n");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&brr[i]);
	}
	int num=0;
	int crr[n1+n2];
	for(int i=0;i<n1;i++)
	{
	crr[num]=arr[i]	;
	num++;
	}
	for(int i=0;i<n2;i++)
	{
	crr[num]=brr[i];	
	num++;
	}
	
	for(int i=0;i<n1+n2;i++)
	{
		printf("%d ",crr[i]);
	}
}