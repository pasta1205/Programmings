#include<stdio.h>

int factorial(int n)
{
	int fact=1,i;

	for(i=1; i<=n; i++)
		fact = fact * i;

	return fact;
}

int main()
{
	int x;
	printf("Enter a No.:");
	scanf("%d",&x);
	int a = factorial(x);
	printf("Factorial of the Entered No. is:%d\n",a);
}
