#include<stdio.h>
void main()
{
char userid[50]="hariombijamwar";
char password[50]="hari12345";
	int num=234;
char storeUserId[50];
char storePassword[50];
printf("Enter the user id\n");
scanf("%s",storeUserId);
printf("Enter the password\n");
scanf("%s",storePassword);

int userIdMatch=1;
int userPasswordMatch=1;
int i=0;

while(userid[i]!='\0')
{
	if(userid[i]!=storeUserId[i])
	{
		userIdMatch=0;
		break;
	}
	i++;
}
int j=0;
while(password[i]!='\0')
{
	if(password[i]!=storePassword[i])
	{
		userPasswordMatch=0;
		break;
	}
	j++;
}

if(userIdMatch==1 && userPasswordMatch==1 )
{
	int tempNum;
printf("Enter number %d\n",num);
scanf("%d",&tempNum);
if(num==tempNum)
{
printf("success\n");	
}
else
{
printf("Failed\n");	
}	
}
else
{
	printf("id,password doesnt match\n");
}
}