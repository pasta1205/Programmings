#include<stdio.h>
#include<string.h>

void naiveStrMatch(char text[], char pattern[])
{
	int n = strlen(text);
	int m = strlen(pattern);
	int i,j;
	int flag = 0;

	for(i=0; i<= n-m; i++)
	{
		for(j=0; j<m; j++)
		{
			if(text[i+j] != pattern[j])
				break;
		}

		if (j == m)
		{
			printf("Pattern found at shift %d\n", i);
			flag = 1;
		}
	}

	if (flag == 0)
		printf("Pattern not found in the text.\n");
}

void main()
{
	char text[100], pattern[100];

	printf("Enter the Text: ");
	scanf("%[^\n]",text);
	getchar();
	printf("Enter the Pattern: ");
	scanf("%[^\n]",pattern);

	naiveStrMatch(text,pattern);
}