#include<stdio.h>
int main()
{
	char str[20];
	printf("Enter the String:");
	scanf("%[^\n]",str);
	printf("Your Inputed String is:\n%s\n",str);
}
