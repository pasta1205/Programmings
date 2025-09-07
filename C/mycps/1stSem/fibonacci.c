#include<stdio.h>

int main()
{
	int a=0, b=1, nxtTerm=0,n;

	printf("Enter a Number:");

	scanf("%d",&n);

	do
	{
		printf("%d\t",nxtTerm);

		a=b;
		b=nxtTerm;
		nxtTerm=a+b;
	}

	while(nxtTerm<=n);
}
