#include <stdio.h>
#include <string.h>

#define MAX 100

char X[MAX], Y[MAX];
int  c[MAX + 1][MAX + 1];
char b[MAX + 1][MAX + 1];

int LCS(char X[], char Y[], int m, int n) {
    int i, j;

    for (i = 0; i <= m; i++)
        c[i][0] = 0;
    for (j = 0; j <= n; j++)
        c[0][j] = 0;

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 'D';      // diagonal (↖)
            } else if (c[i - 1][j] >= c[i][j - 1]) {
                c[i][j] = c[i - 1][j];
                b[i][j] = 'U';      // up (↑)
            } else {
                c[i][j] = c[i][j - 1];
                b[i][j] = 'L';      // left (←)
            }
        }
    }
    return c[m][n];
}

void print_LCS(int i, int j) {
    if (i == 0 || j == 0)
        return;

    if (b[i][j] == 'D') {
        print_LCS(i - 1, j - 1);
        printf("%c", X[i - 1]);
    } else if (b[i][j] == 'U') {
        print_LCS(i - 1, j);
    } else {
        print_LCS(i, j - 1);
    }
}

int main() {
    int m, n, length;

    printf("Enter first string: ");
    scanf("%s", X);
    printf("Enter second string: ");
    scanf("%s", Y);

    m = strlen(X);
    n = strlen(Y);

    length = LCS(X, Y, m, n);
    printf("Length of LCS = %d\n", length);
    printf("LCS = ");
    print_LCS(m, n);
    printf("\n");

    return 0;
}