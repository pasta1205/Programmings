#include<stdio.h>

int main()
{
	int i, orgn, n, c, arm=0;

	printf("Enter a Number:");

	scanf("%d",&i);

	orgn = i;

	while (orgn>0)
	{
		n = orgn % 10;

		c = n * n * n;

		arm += c;

		orgn  = orgn / 10;
	}

	if (arm == i)
		printf("Entered No. is an Armstrong No.\n");

	else
		printf("Entered No. is not an Armstrong No.\n");
}
