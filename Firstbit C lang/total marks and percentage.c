#include<stdio.h>
void main()
{
	float marathi =60, english =80, sanskrit=90, history=70 , geography= 100;
	float total = marathi + english + sanskrit + history + geography;
	printf("total marks obtained is %f \n",total);
	float percentage = (total/500)*100;
	printf("percentage obtained is %f ",percentage);
}
