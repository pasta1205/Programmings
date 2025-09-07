#include<stdio.h>
int main()
{
	char str[100];
	int len = 0;
	printf("Enter The String:\n");
	scanf("%[^\n]",str);
	while(str[len] != '\0')
		len++;

	printf("String Length is:%d\n",len);
}
