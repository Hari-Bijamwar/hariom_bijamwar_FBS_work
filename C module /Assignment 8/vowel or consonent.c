#include<stdio.h>
void checkVowelConsonent(char);
void main()
{char ch;
printf("enter the character \n");
scanf("%d",&ch);
checkVowelConsonent(ch);
}

void checkVowelConsonent(char ch)
{
	
	if(ch=='a'|| ch=='A' || ch=='e' || ch =='E' ||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		printf("The character is vowel \n");
	}
	else
	{
		printf("The character is consonant");
	}	
}
