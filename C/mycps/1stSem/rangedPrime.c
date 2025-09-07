#include<stdio.h>

int main()
{
	int n,i,x,c;

	printf("Enter a number:");

	scanf("%d",&n);

	for(i=3; i<=n; i++)
	{
		c = 0;
		for(x=2; x<=i/2; x++)
		{
			if(i%x == 0)
			{
				c=1;
				break;
			}
		}

		if (c==0)
			printf("%d\t",i);		
	}
	printf("\n\n");
}
