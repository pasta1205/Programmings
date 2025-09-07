#include<stdio.h>

int palindrome(int i)
{
	int n, orgn, revn=0;

	orgn = i;

	while (orgn>0)
	{
		n = orgn % 10;

		revn = (revn*10) + n;

		orgn  = orgn / 10;
	}

	return revn;
}

int main()
{
	int a;
	printf("Enter a Number:");
	scanf("%d",&a);

	int m = palindrome(a);
	if (m == a)
		printf("It's a Palindrome.\n");
	else
		printf("It's not a Palindrome\n");
}
