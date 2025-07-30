#include<stdio.h>
struct Time
{
	int hour;
	int minute;
	int second;
	
};
void main()
{
	struct Time T1;
	T1.hour=2;
	T1.minute=2;
	T1.second=20;
	
	printf("hour=%d month=%d second=%d\n",T1.hour,T1.minute,T1.second);
	struct Time T2;
	printf("Enter hour ,minute,second\n");
	scanf("%d%d%d",&T2.hour,&T2.minute,&T2.second);
	printf("hour=%d month=%d second=%d\n",T2.hour,T2.minute,T2.second);
	
}