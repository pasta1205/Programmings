#include <stdio.h>
#include <limits.h>

void printOptimalParenthesis(int s[10][10], int i, int j) 
{
    if (i == j)
        printf("A%d ", i);
    else 
    {
        printf("(");
        printOptimalParenthesis(s, i, s[i][j]);
        printOptimalParenthesis(s, s[i][j] + 1, j);
        printf(")");
    }
}

void matrixChainOrder(int p[], int n) 
{
    int m[10][10], s[10][10];
    int i, j, k, l, q;

    for (i = 1; i < n; i++)
        m[i][i] = 0;

    for (l = 2; l < n; l++) 
    {
        for (i = 1; i < n - l + 1; i++) 
	{
            j = i + l - 1;
            m[i][j] = INT_MAX;

            for (k = i; k <= j - 1; k++) 
	    {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) 
		{
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

    printf("\nMinimum number of multiplications: %d\n", m[1][n - 1]);
    printf("Optimal Parenthesization: ");
    printOptimalParenthesis(s, 1, n - 1);
    printf("\n");
}

void main() 
{
    int p[10];
    int n, i;

    printf("Enter number of matrices: ");
    scanf("%d", &n);

    printf("Enter dimensions (p0 p1 p2 ... pn): ");
    for (i = 0; i <= n; i++)
        scanf("%d", &p[i]);

    matrixChainOrder(p, n + 1);
}