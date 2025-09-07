#include<stdio.h>
int Largest(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	int a,b,c;
	printf("Enter The Value of a:");
	scanf("%d",&a);
	printf("Enter The Value of b:");
	scanf("%d",&b);
	printf("Enter The Value of c:");
	scanf("%d",&c);

	int large = Largest(a,b);
	large = Largest(c,large);

	printf("Largest No. is:%d\n",large);
}
