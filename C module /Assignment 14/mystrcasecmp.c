#include<stdio.h>
#include<string.h>
int mystrcasecmp(char*,char*,int );
void mystrlower(char*);
void main()
{
	char str1[100];
	printf("\nEnter the 1st string to compare\n");
	scanf("%s",str1);
	char str2[100];
	printf("\nEnter the 2nd string to compare\n");
	scanf("%s",str2);
	int n1=strlen(str1);
	int n2=strlen(str2);
	int max;
	if(n1>n2)
	max=n1;
	else if(n1<n2)
	max=n2;
	else
	max=n1;
	
	
int res=mystrcasecmp(str1,str2,max);

if(res==0)
{
	printf("\nboth are equal");
}
else if(res==-1)
{
	printf("\nstring 2 is greater");
	
}
else if(res==1)
{
	printf("\nstring 1 is greater");
}

	
}

int mystrcasecmp(char*str1,char*str2,int max)
{
	mystrlower(str1);
	mystrlower(str2);
	
		for(int i=0;i<max;i++)
	{
		if(str1[i]>str2[i])
		return 1;
		else if(str1[i]<str2[i])
		return -1;
	}
	return 0;
}
void mystrlower(char*str2)
{
	int i=0;
	while(str2[i]!='\0')
	{
		if(str2[i]>='A'&&str2[i]<='Z')
		{
				str2[i]=str2[i]-'A'+'a';
		}
		i++;
	}	
}