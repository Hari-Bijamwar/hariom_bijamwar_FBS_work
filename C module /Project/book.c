#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
typedef struct Book
{
int id;	
char bname[50];
char author[50];
int price;
float rating;
char category[50];
	
}Book;
Book storeBookDetails();
void storeBookData(Book* );
//void storeBookData(Book* ,int );
void displayBookData(Book*,int );
void removeBookData(Book*,int*);
void convertToLower(char*);
int getIndex(Book*,int,int);
void viewOneBookData(Book*,int );
void searchBook(Book*,int );
void updateBookInfo(Book * ,int );
Book* addNewBook(Book*,int*);
void sortBook(Book*,int );
void main()
{

int n=5,flag=1,choice;
//printf("How many books data you want to store \n");
//scanf("%d",&n);
Book* bookData=(Book*)malloc(sizeof(Book)*n);
//storeBookData(bookData,n);
storeBookData(bookData);
//displayBookData(bookData,n);

while(flag==1)
{
printf("Enter 1 to add new book\n");
printf("Enter 2 to remove book\n");
printf("Enter 3 to search book\n");
printf("Enter 4 to update book data\n");
printf("Enter 5 to display sorted books\n");
printf("Enter 6 to display all books\n");
scanf("%d",&choice);
	if(choice==1)
	{
		bookData=addNewBook(bookData,&n);
	}
	else if(choice==2)
	{
		removeBookData(bookData, &n);
	}
	else if(choice==3)
	{
		searchBook(bookData,n);
	}
	else if(choice==4)
	{
		updateBookInfo( bookData,n);
	}
	else if(choice==5)
	{
		sortBook(bookData, n);
	}
	else if(choice==6)
	{
	displayBookData(bookData,n);	
	}
	else
	{
		printf("Enter a valid choice\n");
	}
	printf("Enter 1 to continue 0 to exit\n");
	scanf("%d",&flag);
	
}

}
//void storeBookData(Book* bookData,int n)
void storeBookData(Book* bookData)
{
//	for(int i=0;i<n;i++)
//	{
//		printf("Enter book details of book %d\n",i+1);
//		printf("Enter book name\n");
//		fflush(stdin);
//		gets(bookData[i].bname);
//		printf("Enter book id\n");
//		scanf("%d",&bookData[i].id);
//		fflush(stdin);
//		printf("Enter author of book\n");
//		gets(bookData[i].author);
//		printf("Enter price of book\n");
//		scanf("%d",&bookData[i].price);
//		printf("Enter the rating of book\n");
//		scanf("%d",&bookData[i].rating);
//	}

bookData[0].id=1;
strcpy(bookData[0].bname,"atomic habits");
strcpy(bookData[0].author,"james clear");
bookData[0].price=199;
bookData[0].rating=4.3;
strcpy(bookData[0].category,"psychology");

bookData[1].id=2;
strcpy(bookData[1].bname,"do epic shit");
strcpy(bookData[1].author,"ankur warikoo");
bookData[1].price=299;
bookData[1].rating=4.0;
strcpy(bookData[1].category,"business");

bookData[2].id=3;
strcpy(bookData[2].bname,"rich dad poor dad");
strcpy(bookData[2].author,"robert kiyosaki ");
bookData[2].price=99;
bookData[2].rating=4.7;
strcpy(bookData[2].category,"business");

bookData[3].id=4;
strcpy(bookData[3].bname,"politics");
strcpy(bookData[3].author,"aristotle");
bookData[3].price=599;
bookData[3].rating=3.7;
strcpy(bookData[3].category,"philosophy");

bookData[4].id=5;
strcpy(bookData[4].bname,"hamlet");
strcpy(bookData[4].author,"william shakespeare");
bookData[4].price=499;
bookData[4].rating=4.1;
strcpy(bookData[4].category,"drama");
}

void displayBookData( Book*bookData,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Book %d detail\n",i+1);
		printf("Bookname=%s Bookid=%d Bookauthor=%s Bookprice=%d BookRating=%.1f BookCategory=%s\n",bookData[i].bname,bookData[i].id,bookData[i].author,bookData[i].price,bookData[i].rating,bookData[i].category);
	}
}

int getIndex(Book*bookData,int n,int tempBookId)
{
	for(int i=0;i<n;i++)
	{
		if(bookData[i].id==tempBookId)
		{
			return i;
		}
	}
	return -1;
}
void convertToLower(char*name)
{
	for(int i=0;name[i]!='\0';i++)
	{
		name[i]=tolower(name[i]);
	}
}

void removeBookData(Book*bookData,int *n)
{
	int tempBookId;
	printf("Enter the book id to delete the book\n");
	scanf("%d",&tempBookId);
	int index=getIndex(bookData, *n, tempBookId);
	if(index!=-1)
	{
		for(int i=index;i<*n-1;i++)
	{
		bookData[i]=bookData[i+1];
	}
	(*n)--;
	displayBookData(bookData,*n);
	}
	else
	{
		printf("Enter valid id\n");
	}
	
}
void viewOneBookData(Book*bookData,int index)
{
	printf("Bookname=%s Bookid=%d Bookauthor=%s Bookprice=%d BookRating=%.1f BookCategory=%s\n",bookData[index].bname,bookData[index].id,bookData[index].author,bookData[index].price,bookData[index].rating,bookData[index].category);
}
void searchBook(Book*bookData,int n)
{
	int tempBookId,choice;
	char name[100];
	char authName[100];
	char tempCategory[100];
	printf("if you want to search book by id enter 1\nif you want to search book by name enter 2\nif you want to search by authors name enter 3\nif you want to search by category enter 4\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter book id\n");
		scanf("%d",&tempBookId);
		int index=getIndex(bookData, n,tempBookId);
		viewOneBookData(bookData,index);
	}
	else if(choice==2)
	{
		printf("Enter book name\n");
		fflush(stdin);
		gets(name);
		convertToLower(name);
		for(int i=0;i<n;i++)
		{
		if(strstr(bookData[i].bname,name)!=NULL)
		{
			viewOneBookData(bookData,i);
			break;
		}	
		}
		
	}
	else if(choice==3)
	{
		printf("Enter author name\n");
		fflush(stdin);
		gets(authName);	
		convertToLower(authName);
		for(int i=0;i<n;i++)
		{
		if(strstr(bookData[i].author,authName)!=NULL)
		{
			viewOneBookData(bookData,i);	
		}	
		}
	}
	else if(choice==4)
	{
		printf("Enter category of book\n");
		fflush(stdin);
		gets(tempCategory);	
		convertToLower(tempCategory);
		for(int i=0;i<n;i++)
		{
		if(strcmp(tempCategory,bookData[i].category)==0)
		{
			viewOneBookData(bookData,i);			
		}	
		}
	}
	else
	{
		printf("Enter valid choice\n");
	}
}

Book* addNewBook(Book*bookData,int*n)
{
	char tempBookName[200];
	char authorName[100];
	char tempCategory[100];
	float tempRating;
	(*n)++;
	Book*temp=realloc(bookData,sizeof(Book)*(*n));
	printf("Enter new book details\n");
	printf("Enter book id\n");
	scanf("%d",&bookData[(*n)-1].id);
	printf("Enter book name\n");
	fflush(stdin);
	gets(tempBookName);
//	for(int i=0;tempBookName[i]!='\0';i++)
//	{
//		tempBookName[i]=tolower(tempBookName[i]);
//	}
    convertToLower(tempBookName);
	strcpy(bookData[(*n)-1].bname,tempBookName);
	printf("Enter author name\n");
	fflush(stdin);
	gets(authorName);
//		for(int i=0;authorName[i]!='\0';i++)
//	{
//		authorName[i]=tolower(authorName[i]);
//	}
    convertToLower(authorName);
	strcpy(bookData[(*n)-1].author,authorName);
	printf("Enter price of book\n");
	scanf("%d",&bookData[(*n)-1].price);
	printf("Enter rating of book\n");
//	scanf("%f",&bookData[(*n)-1].rating);
    scanf("%f",&tempRating);
    if(tempRating>=0 && tempRating<=5)
    {
    	bookData[(*n)-1].rating=tempRating;
	}
	else
	{
		printf("Enter a valid rating\n");
		(*n)--;
		return bookData;	
	}
	
	printf("Enter book category\n");
	fflush(stdin);
	gets(tempCategory);
	convertToLower(tempCategory);
	strcpy(bookData[(*n)-1].category,tempCategory);
	
	return temp;
}

void updateBookInfo(Book * bookData,int n)
{
	int tempBookId,choice;
	printf("Enter id of book for which you want to make changes\n");
	scanf("%d",&tempBookId);
	int index=getIndex(bookData, n, tempBookId);
	if(index!=-1)
	{
		
	
	printf("Enter 1 to update rating\nEnter 2 to update price\nEnter 3 to update both\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter new rating\n");
		scanf("%f",&bookData[index].rating);
	}
	else if(choice==2)
	{
		printf("Enter new price\n");
		scanf("%d",&bookData[index].price);
	}
	else if(choice==3)
	{
		printf("Enter new rating\n");
		scanf("%f",&bookData[index].rating);
		printf("Enter new price\n");
		scanf("%d",&bookData[index].price);	
	}
	else
	{
		printf("Enter valid choice\n");
	}
  displayBookData(bookData,n);
  }
  else
  {
  	printf("Enter valid id\n");
  }
}

void sortBook(Book*bookData,int n)
{
	int choice;
	printf("Enter 1 to sort books low to high by price\n");
	printf("Enter 2 to sort books high to low by price\n");
	printf("Enter 3 to sort books low to high by ratings\n");
	printf("Enter 4 to sort books high to low by ratings\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(bookData[j].price>bookData[j+1].price)
				{
					Book temp=bookData[j];
					bookData[j]=bookData[j+1];
					bookData[j+1]=temp;
				}
			}
		}
	}
	else if(choice==2)
	{
			for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(bookData[j].price<bookData[j+1].price)
				{
					Book temp=bookData[j];
					bookData[j]=bookData[j+1];
					bookData[j+1]=temp;
				}
			}
		}
	}
	else if(choice==3)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(bookData[j].rating>bookData[j+1].rating)
				{
					Book temp=bookData[j];
					bookData[j]=bookData[j+1];
					bookData[j+1]=temp;
				}
			}
		}
	}
	else if(choice==4)
	{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(bookData[j].rating<bookData[j+1].rating)
				{
					Book temp=bookData[j];
					bookData[j]=bookData[j+1];
					bookData[j+1]=temp;
				}
			}
		}
	}
	else
	{
		printf("Enter valid choice\n");
		return;
	}
	displayBookData(bookData,n);
}