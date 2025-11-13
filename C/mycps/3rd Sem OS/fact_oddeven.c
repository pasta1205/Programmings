#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int cpid = fork();

	if(cpid < 0)
		printf("Unable to create the child process..\n");

	else if(cpid == 0)
	{
		int i,fact=1;
		printf("In Child Process ID:%d\n", getpid());

		if(n==0 || n==1)
		{
			printf("Factorial: 1");
			exit(1);
		}
		else
		{
			for(i=n; i>0; i--)
				fact *= i;
			
			printf("Factorial: %d\n",fact);
		}
	}

	else
	{
		printf("In Parent Process ID:%d\n", getpid());

		if(n%2 == 0)
			printf("The number is Even.\n");
		else
			printf("The number is Odd.\n");
	}

	return 0;
}