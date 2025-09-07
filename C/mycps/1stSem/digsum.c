#include<stdio.h>
int main()
{
	int i, n, sum=0, newn;

	printf("Enter a Number:");

	scanf("%d",&i);

	while (i!=0)
	{
		n = i%10;

		sum += n;

		newn = i/10;

		i = newn;
	}

	printf("Sum = %d\n", sum);
}
