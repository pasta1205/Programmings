#include <stdio.h>

int main()
{
	int year, leap;

	printf("Enter a Year:");

	scanf("%d",&year);

	leap= (year % 4 == 0) ? 1:0;

	if (leap==1)
	{
	    printf("This is a Leap Year.\n");
	}

	else
	    printf("This is not a Leap Year.\n");
}
