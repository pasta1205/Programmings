#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter the String:\n");
	scanf("%[^\n]",str);

	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	printf("Updated String is:\n%s\n",str);
}
