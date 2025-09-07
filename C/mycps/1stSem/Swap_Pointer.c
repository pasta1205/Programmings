#include<stdio.h>
void Swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x,y;

	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	Swap(&x,&y);

	printf("Value after swapping:\n");
	printf("X= %d\n Y= %d\n",x,y);
}
