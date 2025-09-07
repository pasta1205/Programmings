#include <stdio.h>
int main()
{
	int a=0, b=0;

	printf("a=");

	scanf("%d",&a);

	printf("b=");

	scanf("%d",&b);

	if(a>b)
	{
	   printf("1\n");
        }
	else
	{
	   printf("0\n");
	}

	printf("a=%d\n",a);

	printf("b=%d\n\n",b);
}
