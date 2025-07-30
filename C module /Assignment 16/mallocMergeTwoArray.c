#include<stdio.h>
void storeArray(int*,int );
void mergeTwoArray(int*,int*,int,int);
void main()
{
    int n1;
	printf("Enter the size of an array 1\n");
	scanf("%d",&n1);
	int *arr=(int*)malloc(sizeof(int)*n1);
	storeArray(arr,n1);
	int n2;
	printf("Enter the size of an array 2\n");
	scanf("%d",&n2);
	int *brr=(int*)malloc(sizeof(int)*n2);
	storeArray(brr,n2);
	mergeTwoArray(arr,brr,n1,n2);
}
void storeArray(int*arr,int n)
{
	printf("\nEnter the elements of an array \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void mergeTwoArray(int*arr,int*brr,int n1,int n2)
{
	int num=0;
	int *crr = (int*)malloc(sizeof(int)*(n1+n2));
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