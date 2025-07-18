 #include<stdio.h>
void storeArray(int*,int );
void primeNumsOfArray(int*,int);
void main()
 {
 int n;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
storeArray(arr,n);
primeNumsOfArray(arr,n);

 }
 void storeArray(int*arr,int n)
 {
 	printf("\nEnter the elements of an array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
 }
 void primeNumsOfArray(int*arr,int n)
 {
 		printf("Prime numbers in an array are \n");

	for(int i=0;i<n;i++)
	{
	int flag=0;
	if(arr[i]<=1)
	{
			flag=1;
	}
	for(int j=2;j<arr[i];j++)
	{
		if( arr[i]%j==0 )
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("%d ",arr[i]);
	}
 }