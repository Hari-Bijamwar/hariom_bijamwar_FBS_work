#include<stdio.h>
#include<string.h>
struct student {
	
		int roll_no;
			int marks;
	char name[100];


	
};
void main()
{
	struct student s1;
	strcpy(s1.name,"hari");
	s1.roll_no=35;
	s1.marks=92;

	printf("%d\n",s1.roll_no);
	printf("%d\n",s1.marks);
	printf("%s\n",s1.name);
	
	struct student s2;
	scanf("%d",&s2.roll_no);
	scanf("%d",&s2.marks);
	fflush(stdin);
	gets(s2.name);

	printf("%d\n",s2.roll_no);
	printf("%d\n",s2.marks);	
	printf("%s\n",s2.name);


	
	struct student s3;
	scanf("%d",&s3.roll_no);
	scanf("%d",&s3.marks);
	fflush(stdin);
	gets(s3.name);
	
		printf("%d\n",s3.roll_no);
		printf("%d\n",s3.marks);
	    printf("%s\n",s3.name);


	
		struct student s4;
	scanf("%d",&s4.roll_no);
	scanf("%d",&s4.marks);
	fflush(stdin);
	gets(s4.name);
	
	printf("%d\n",s4.roll_no);
	printf("%d\n",s4.marks);
	printf("%s\n",s4.name);

	
}