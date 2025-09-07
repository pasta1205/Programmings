#include<stdio.h>
int main()
{
	char str[100];
	int i,j;

	printf("Enter a String:");
	scanf("%s",str);

	for(i=0; str[i] != '\0'; i++);
	for(j=i-1; j>=0 ; j--)
		printf("Reverse of the String is:\n%c",str[j]);
}
