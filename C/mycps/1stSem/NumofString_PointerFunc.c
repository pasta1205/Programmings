#include<stdio.h>
int Scount(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[100];
	int strlen;
	printf("Enter a String:");
	scanf("%[^\n]",str);

	strlen = Scount(str);

	printf("Number of Characters: %d\n",strlen);
}
