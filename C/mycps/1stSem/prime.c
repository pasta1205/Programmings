#include<stdio.h>

int main()
{
	int n,i,count;

	printf("Enter a number:");

	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		    count += 1;	
	}

	if(count>2)
		printf("It's a Composite no.\n");

	else
		printf("It's a Prime no.\n");
}
