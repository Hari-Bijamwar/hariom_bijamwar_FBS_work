#include<stdio.h>
void mystrcpy(char*,char*);
void main()
{
	char str1[10]="range";
	char str2[10]="";
	
	mystrcpy(str2,str1);
	printf("%s",str2);
	
}
void mystrcpy(char*dest,char*src)
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
}