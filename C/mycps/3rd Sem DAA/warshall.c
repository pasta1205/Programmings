#include <stdio.h>
#include <limits.h>

#define MAX 100

int n;
int D[MAX][MAX];

void readMatrix() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int w;
            scanf("%d", &w);

            if (w == -1) {
                if (i == j) D[i][j] = 0;
                else D[i][j] = INT_MAX;
            } else {
                D[i][j] = w;
            }
        }
    }
}

void floydWarshall() {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (D[i][k] != INT_MAX && D[k][j] != INT_MAX) {
                    int newDist = D[i][k] + D[k][j];
                    if (newDist < D[i][j]) {
                        D[i][j] = newDist;
                    }
                }
            }
        }
    }
}

void printMatrix() {
    printf("\nFinal Shortest Path Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (D[i][j] == INT_MAX)
                printf("INF ");
            else
                printf("%d ", D[i][j]);
        }
        printf("\n");
    }
}

int main() {
    readMatrix();
    floydWarshall();
    printMatrix();
    return 0;
}