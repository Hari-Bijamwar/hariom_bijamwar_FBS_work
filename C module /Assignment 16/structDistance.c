#include<stdio.h>
struct Distance
{
	int Feet;
	int inch;

	
};
void main()
{
	struct Distance D1;
	D1.Feet=2;
	D1.inch=2;
	
	
	printf("Feet=%d inch=%d \n",D1.Feet,D1.inch);
	struct Distance D2;
	printf("Enter Feet ,inch\n");
	scanf("%d%d",&D2.Feet,&D2.inch);
	printf("Feet=%d inch=%d \n",D2.Feet,D2.inch);
	
}