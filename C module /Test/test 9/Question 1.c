#include<stdio.h>
void main()
{
	char str[50]="aabbccddeeoomnn";
	char dup[50];
	int index=0;
	for(int i=0;str[i]!='\0';i++)
	{
		int count=0;
		for(int j=0;j<i;j++)
		{
			if(str[i]==str[j])
			{
				count =1;
			}
		}
		if(count==0)
		{
			dup[index]=str[i];
			index++;
		}
	}
	dup[index]='\0';
	
	for(int i=0;dup[i]!='\0';i++)
	{
		printf("%c",dup[i]);
	}
}