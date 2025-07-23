#include<stdio.h>
#include<string.h>
void mystrstr(char*,char*,int);
void main()
{
	char str1[100];
	printf("\nEnter the main string \n");
	scanf("%s",str1);
	char str2[100];
	printf("\nEnter the sub string \n");
	scanf("%s",str2);
	int n;
	printf("\nEnter value of n\n");
	scanf("%d",&n);
	mystrstr(str1,str2,n);
	
}

void mystrstr(char*str1,char*str2,int n)
{
	int len=strlen(str2);
	int index=0;
	for(int i=0;i<n;i++)
	{
		if(str1[i]==str2[index])
		{
			index++;
			if(index==len)
			{
				int foundIndex=i-index+1;
				printf("%d",foundIndex);
				break;
			}
		}
		else
		{
			index=0;
		}
	}
}

