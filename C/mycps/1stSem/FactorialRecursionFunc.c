#include<stdio.h>
int factorial(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n-1);
}

int main()
{
	int a;
	printf("Enter a No.:");
	scanf("%d",&a);

	int f = factorial(a);
	printf("Factorial:%d\n",f);
}
