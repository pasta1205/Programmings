#include<stdio.h>

int prime(int n)
{
	int i,count;

	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		    count += 1;	
	}

	return count;
}

int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);

	int m = prime(a);

	if(m > 2)
		printf("It's a Composite No.\n");

	else
		printf("It's a Prime No.\n");
}
