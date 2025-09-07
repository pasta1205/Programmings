#include <stdio.h>
float AoC(float d)
{
	float area=0,pi=22/7;

	area=pi*d/2*d/2;

	return area;
}

int main()
{
	float d;

	printf("Enter The Diameter of the Circle:");

	scanf("%f",&d);

	printf("Area of The Circle is:%f\n",AoC(d));
}
