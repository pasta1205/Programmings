#include<stdio.h>

int main()
{
	int x,i, c, n, revn=0;

	printf("Enter a Number:");

	scanf("%d",&x);

	c=0;

	for (i=1; i<=x; i++)
	{
		while (i>0)
		{
			n = i % 10;

			revn = (revn*10) + n;

			i  = i / 10;
		}

		if (revn == i)
		{
			c=1;
			break;
		}
	}
	if (c==1)
		printf("%d",i);
}
