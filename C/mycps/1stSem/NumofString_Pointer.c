#include<stdio.h>
int main()
{
	char str[100],*ptr;
	int count= 0;
	printf("Enter a String:");
	scanf("%[^\n]",str);

	ptr = str;

	while( *ptr != '\0')
	{
		count++;
		ptr++;
	}

	printf("Number of Characters: %d\n",count);
}
