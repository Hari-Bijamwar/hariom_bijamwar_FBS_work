#include<stdio.h>
#include<string.h>
void vowelCount(char*);
void main()
{
	char str[100];
	printf("\nEnter string\n");
	scanf("%s",str);
	vowelCount(str);
}
void vowelCount(char*str)
{
	int i=0;
	int count=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		count++;
		
		i++;
	}
	
	printf("\nNumber of Vowels in an string is %d\n",count);
}