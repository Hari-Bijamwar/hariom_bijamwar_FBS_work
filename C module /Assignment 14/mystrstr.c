#include<stdio.h>
#include<string.h>
void mystrstr(char*,char*);
void main()
{
	char str1[]="HiHello";
	char str2[]="Hell";
	mystrstr(str1,str2);
	
}

void mystrstr(char*str1,char*str2)
{
	int len=strlen(str2);
	int index=0;
	for(int i=0;i<strlen(str1);i++)
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

