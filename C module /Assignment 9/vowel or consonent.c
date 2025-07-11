#include<stdio.h>
int checkVowelConsonent(char);
void main()
{	char ch;
	printf("Enter the character \n");
	scanf("%c",&ch);
int res=checkVowelConsonent(ch);
if(res==1)
{
		printf("The character is vowel \n");
}
else
{
		printf("The character is consonant");
}
}

int checkVowelConsonent(char ch)
{

	if(ch=='a'|| ch=='A' || ch=='e' || ch =='E' ||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
	return 1;
	}
	else
	{
	return 0;
	}	
}
