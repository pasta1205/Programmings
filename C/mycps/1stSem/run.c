#include<stdio.h>
int main()
{
	int i,j;

	for (i=11; i<=99; i++)
	{
		for (j=i; j<=99; j++)
		{
			if(i==j)
				printf("%d ",j);
		}
	}
}
