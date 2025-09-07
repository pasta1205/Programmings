#include <stdio.h>
#include <math.h>
int main()
{
	float s=0,a=5,b=12,c=13,area;

	s=(a+b+c)/2;

	area= sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Area of Triangle=%f\n\n",area);
}
