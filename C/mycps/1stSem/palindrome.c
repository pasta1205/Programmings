#include<stdio.h>

int main()
{
	int i, orgn, n, revn=0, newn;

	printf("Enter a Number:");

	scanf("%d",&i);

	orgn = i;

	while (orgn>0)
	{
		n = orgn % 10;

		revn = (revn*10) + n;

		orgn  = orgn / 10;
	}

	if (revn == i)
		printf("Entered No. is a Palindrome\n");

	else
		printf("Entered No. is not a Palindrome\n");
}
