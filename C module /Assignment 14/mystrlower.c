#include<stdio.h>
void mystrlower(char*);
void main()
{
	char str2[]="ROVER";
	mystrlower(str2);
	printf("\n%s",str2);

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
