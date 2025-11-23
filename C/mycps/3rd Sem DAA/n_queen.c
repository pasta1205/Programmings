#include<stdio.h>
#include<stdlib.h>

int x[20];
int place(int k,int i)
{
	int j;
	for(j=1; j<k; j++)
	{
		if((x[j] == i) || (abs(x[j] - i) == abs(j - k)))
			return 0;
	}

	return 1;
}
int count=0;
void n_queen(int k, int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
		if (place(k,i))
		{
			x[k] = i;
			if(k == n)
			{
				for(j=1; j<=n; j++)
					printf("%d\t",x[j]);
				printf("\n");
				count++;
			}

			else
				n_queen(k+1,n);
		}
	}
}

void main()
{
	int n;
	printf("Enter the number of Queens:");
	scanf("%d",&n);
	printf("Solution:\n");
	n_queen(1,n);
	printf("Total number of solutions:%d\n",count);
}
