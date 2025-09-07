#include <stdio.h>

int main()
{
	int day;
	
	printf("Enter the number of the day:");

	scanf("%d",&day);

	switch(day)
	{
	   case 1:
		   printf("Monday");
	   case 2:
		   printf("Tuesday");
	   case 3:
		   printf("Wednesday");
           case 4:
		   printf("Thursday");
           case 5:
		   printf("Wednesday");
	}
}
