#include <stdio.h>
int main()
{
	float sqa=0, bmulti=0, avg=0;

	int a=0,b=0,c=0,cremain=0;

	printf("a=");

	scanf("%d",&a);

	printf("b=");

	scanf("%d",&b);

	printf("c=");

	scanf("%d",&c);

	sqa= (a*a)/5;

	bmulti= (b*3)-14;

	cremain= c%a;

	avg= (sqa+ bmulti + cremain)/3;

	printf("Average=%f\n\n",avg);
}
