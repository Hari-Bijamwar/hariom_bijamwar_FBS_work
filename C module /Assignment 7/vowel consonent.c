#include<stdio.h>
int checkVowelConsonent();
void main()
{
int res=checkVowelConsonent();
if(res==1)
{
		printf("The character is vowel \n");
}
else
{
		printf("The character is consonant");
}
}

int checkVowelConsonent()
{
	char ch='a';
	if(ch=='a'|| ch=='A' || ch=='e' || ch =='E' ||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
	return 1;
	}
	else
	{
	return 0;
	}	
}
