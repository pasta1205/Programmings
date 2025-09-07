#include<stdio.h>

typedef struct COMPLEX
{
	float real;
	float imag;
}cplx;

cplx AddComplex(cplx c1, cplx c2)
{
	cplx result;
	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;
	return result;
}

int main()
{
	cplx num1, num2, sum;
	printf("Enter the Real part of the 1st No.:");
	scanf("%f",&num1.real);
	printf("Enter the Imaginary part of the 1st No.:");
	scanf("%f",&num1.imag);
        printf("Enter the Real part of the 2nd No.:");
        scanf("%f",&num2.real);
        printf("Enter the Imaginary part of the 2nd No.:");
        scanf("%f",&num2.imag);

	sum = AddComplex(num1, num2);

	printf("Addition: %.2f+-%.2fi\n",sum.real,sum.imag);
}
