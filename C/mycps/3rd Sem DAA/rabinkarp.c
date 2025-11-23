#include <stdio.h>
#include <string.h>
#include <math.h>
#define d 10

void rabinKarp(char text[], char pattern[], int q) 
{
    int n = strlen(text);
    int m = strlen(pattern);
    int i, j;
    int p = 0; 
    int t = 0; 
    int h = 1,flag = 0;

    //h = pow(d, m-1) % q;
    for(i=0; i<m-1; i++)
	    h = (h * d) % q;

    //calculating hash for pattern and the first window
    for (i = 0; i < m; i++)
    {
	    p = (d * p + pattern[i]) % q;
	    t = (d * t + text[i]) % q;
    }

    //sliding over the text
    for (i = 0; i <= n - m; i++) 
    {
	    if (p == t)
	    {
		    for (j = 0; j < m; j++)
		    {
			    if (text[i + j] != pattern[j])
				    break;
		    }
		    
		    if (j == m)
		    {
			    printf("Pattern found at shift %d\n", i);
			    flag = 1;
		    }
	    }

	    //calculating next window hash
	    if (i < n - m)
	    {
		    t = (d * (t - text[i] * h) + text[i + m]) % q;
		    if (t < 0)
			    t = (t + q);
	    }
    }

    if(flag == 0)
	    printf("Pattern not found.\n");
}

void main()
{
    char text[100], pattern[100];
    int q = 11;

    printf("Enter the text: ");
    scanf("%[^\n]",text);
    getchar();
    printf("Enter the pattern: ");
    scanf("%[^\n]",pattern);

    rabinKarp(text, pattern, q);
}