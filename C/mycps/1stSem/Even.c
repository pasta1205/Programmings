#include <stdio.h>

int main()
{
     int a, result;

     printf("Enter a number:");

     scanf("%d",&a);

     result= (a % 2 == 0) ? 1:0;

     if(a==1)
	{

     printf("Given number is Even.\n");

	}

     else
     printf("Given number is Odd.\n");
}
