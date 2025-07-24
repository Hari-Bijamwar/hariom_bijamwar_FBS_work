#include<stdio.h>
#include<string.h>
int countWords(char*);
void main()
{
	char str[]="Range Rover Vogue Sport Velar Sv Autobiography";
int count=countWords(str);
printf("Number of words in a string are %d",count);
	
}
int countWords(char*str)
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(str[i]==' '&& i!=0 &&i!=strlen(str)-1)
		{
			count++;
	
		}
				i++;
	}

	return count+1;
}