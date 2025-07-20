#include<stdio.h>
void storeArray(int*,int);
void commonElements(int*,int*,int ,int );
void main()
{
	int n1,n2;
	printf("Enter the size of first array \n");
	scanf("%d",&n1);
	int arr[n1];
	storeArray(arr,n1);
	printf("Enter the size of second array \n");
	scanf("%d",&n2);
	int brr[n2];
	storeArray(brr,n2);
	commonElements(arr,brr,n1,n2);
}

void storeArray(int*arr,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void commonElements(int*arr,int*brr,int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(arr[i]==brr[j])
			{
				printf("%d ",arr[i]);
			}
		}
	}
}