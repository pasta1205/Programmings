#include<stdio.h>
int add_digit(int n)
{
	int rem;
       	static int sum;
	if(n == 0)
		return n;
	else
	{
		rem = n % 10;
		sum += rem;
		add_digit(n / 10);
	}

	return sum;
}

int main()
{
	int a;
	printf("Enter a No.:");
	scanf("%d",&a);

	int add = add_digit(a);
	printf("Addition of Digits:%d\n",add);
}
