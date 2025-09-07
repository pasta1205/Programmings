#include<stdio.h>
int main()
{
	char str1[100], str2[100];
	int i,j;
	printf("Enter String 1:\n");
	scanf("%[^\n]",str1);
	printf("Enter String 2:\n");
	scanf("%[^\n]",str2);

	for(i=0; str1[i] != '\0'; i++);
	for(j=0; str2[j] != '\0'; j++,i++)
		str1[i] = str2[j];

	str1[i] = '\0';
	printf("Concatenated String:\n%s\n",str1);

}
