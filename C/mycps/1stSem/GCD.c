#include<stdio.h>

int main()
{
	int n1, n2, gcd;

	printf("Enter The 1st no.:");

	scanf("%d",&n1);

	printf("Enter The 2nd no.:");

	scanf("%d",&n2);

	while(n1!=n2)
	{
		if (n1>n2)
		   n1 -= n2;
		
		else
		   n2 -= n1;
	}
	
	gcd= n1;

	printf("GCD of The given numbers is: %d\n",gcd);

}
