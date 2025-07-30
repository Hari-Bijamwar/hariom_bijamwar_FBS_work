#include<stdio.h>
void storeArray(int*,int );
void sortArray(int*,int);
void main()
{
	int size;
	printf("Enter the size of an array\n");
	scanf("%d",&size);
	int *arr=(int*)malloc(sizeof(int)*size);
    storeArray(arr,size);
    sortArray(arr,size);

}
void sortArray(int*arr,int size)
{
		for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void storeArray(int*arr,int size)
{
	printf("\nEnter elements of an array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}