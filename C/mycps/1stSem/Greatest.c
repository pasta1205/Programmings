#include <stdio.h>

int main()
{
	int a,b,c,large,largest;

	printf("Enter the value of a:");

	scanf("%d",&a);

	printf("Enter the value of b:");

	scanf("%d",&b);

	printf("Enter the value of c:");

	scanf("%d",&c);

	large= (a>b) ? a:b;

	largest= (large>c) ? large:c;

	large= (c>a) ? c:a;

	largest= (large>b) ? large:b;

	printf("The Greatest among them is:%d\n",largest);
	
}
