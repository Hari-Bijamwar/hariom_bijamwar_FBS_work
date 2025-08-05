#include<stdio.h>
#include<string.h>
void main()
{
	char arr[20]="rangerover";
	
	int start=0;
	int end=strlen(arr)-1;
	
	while(start<=end)
	{
		char temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	printf("%s",arr);
}