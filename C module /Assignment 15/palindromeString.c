#include<stdio.h>
#include<string.h>
int isPalindrome(char*);
void main()
{
	char str1[100];
	printf("\nEnter string1\n");
	scanf("%s",str1);
    int res=isPalindrome(str1);
    if(res==1)
    {
    	printf("\nstring is palindrome\n");
	}
	else
	{
		printf("\nstring is not palindrome\n");
	}
    
}
int isPalindrome(char*str1)
{
	int start=0;
	int end=strlen(str1)-1;
	
	while(start<=end)
	{
		if(str1[start]!=str1[end])
		{
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}