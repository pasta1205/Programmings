#include<stdio.h>
int main()
{
	int i;

	printf("Enter a Number:");

	scanf("%d",&i);

	for (i; i>=1; i--)
	{
		if(i%7 == 0)
			continue;
		printf("%d\t",i);
	}

	printf("\n\n");
}
