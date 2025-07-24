#include<stdio.h>
void replaceBlankSpace(char*);
void main()
{
char str[]="Range Rover Sport Vogue Velar Sv Autobiography";
replaceBlankSpace(str);
printf("%s",str);
}
void replaceBlankSpace(char*str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str[i]='@';
		}
		i++;
	}
	
}