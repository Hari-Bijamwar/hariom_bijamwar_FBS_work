#include<stdio.h>
#include<string.h>
void main() {

	char str1[]="range";
	char str2[]="ROVER";
//1
	int nNew=strcasecmp(str1,str2);
	if(nNew==0) {
		printf("\nBoth strings are equal");
	} else {
		printf("\nBoth strings are unequal");
	}

//2
	int len=strlen(str1);
	printf("\n%d",len);

//3
	strupr(str1);
	printf("\n%s",str1);


//4
	strlwr(str2);
	printf("\n%s",str2);


//5
	strcat(str1,str2);
	printf("\n%s",str1);


//6
	char*a=strchr(str1,'e');
	int index=a-str1;
	printf("\nfirst occurance of character e is at index %d",index);


//7
	char*b=strrchr(str1,'r');
	int index1=b-str1;
	printf("\nlast occurance of r in string is %d",index1);


//8
	strrev(str1);
	printf("\n%s",str1);


//9
	char str3[]="Benz";
	char str4[]="Mercedes";
	strcpy(str4,str3);
	printf("\n%s",str3);


//10
	char str5[]="Land";
	char str6[]="Cruiser";
	strncpy(str5,str6,2);
	printf("\n%s",str5);


//11
	char str7[]="vogue";
	char str8[]="sportlook";
	strncat(str8,str7,4);
	printf("\n%s",str8);


//12
	char str9[]="hari";
	char str10[]="hariom";
	int n=strcmp(str9,str10);
	if(n==0) {
		printf("\nboth strings are equal");
	} else {
		printf("\nboth strings not equal");
	}


//13
	int n1=strncmp(str9,str10,4);
	if(n1==0) {
		printf("\nstring one and two equal");
	} else {
		printf("\nstring one and two not equal");
	}


//14
	char str11[]="hell";
	char str12[]="Hihello";
	char*ptr3=strstr(str12,str11);
	int indexNew=ptr3-str12;
	printf("\n%d",indexNew);
	
//15	

	char str13[]="vogue,velar,sport,autobiography,sv";
	char*token=strtok(str13,",");
	while (token != NULL) {
        printf("\n%s", token);
        token = strtok(NULL, ","); 
    }
    
//16
char buffer[100];
    int age = 22;
    float score = 87.5;
    sprintf(buffer, "Age: %d, Score: %.2f", age, score);
    printf("\nFormatted string is: %s", buffer);
    
//17
char str14[]="  Mustang";
char str15[]="Gt";
memcpy(str14,str15,2);
printf("\n%s",str14);

//`18
char str16[]="     rover";
char str17[]="land";
memmove(str16,str17,4);
printf("\n%s",str16);

//19
char str18[]="rangeRover";
char str19[]="range";
int n5=memcmp(str18,str19,5);
if(n5==0)
{
	printf("\nstrings are equal for provided bytes");
}
else
{
		printf("\nstrings are not equal for provided bytes");
}

//20
  char str20[] = "hello123";
    char str21[] = "345";

    char *ptr21 = strpbrk(str20, str21);

    if (ptr21 != NULL) {
        printf("\nFirst matching character %c at index %ld ", *ptr21, ptr21 - str20);
    } else {
        printf("\nNo matching character found");
    }

//21
char str22[]="abcd12345";
char str23[]="ab";
int matchLength=strspn(str22,str23);
 printf("\nstring matching upto index %d", matchLength);
}