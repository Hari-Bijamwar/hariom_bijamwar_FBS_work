#include<stdio.h>
void checkVowelConsonent();
void main()
{
checkVowelConsonent();
}

void checkVowelConsonent()
{
	char ch='a';
	if(ch=='a'|| ch=='A' || ch=='e' || ch =='E' ||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		printf("The character is vowel \n");
	}
	else
	{
		printf("The character is consonant");
	}	
}
