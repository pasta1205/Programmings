#include <stdio.h>
#include <limits.h>

#define INF 999999

int n;
int w[100][100];   
int d[100];        
int pi[100];       
int visited[100];  

void RELAX(int u, int v) {
    if (w[u][v] > 0 && d[u] + w[u][v] < d[v]) {
        d[v] = d[u] + w[u][v];
        pi[v] = u;
    }
}

int EXTRACT_MIN() {
    int min = INF, u = -1;
    for (int i = 0; i < n; i++)
        if (!visited[i] && d[i] < min) {
            min = d[i];
            u = i;
        }
    return u;
}

void DIJKSTRA(int s) {
    for (int v = 0; v < n; v++) {
        d[v] = INF;
        pi[v] = -1;
        visited[v] = 0;
    }
    d[s] = 0;

    for (int i = 0; i < n; i++) {
        int u = EXTRACT_MIN();
        if (u == -1) break;
        visited[u] = 1;

        for (int v = 0; v < n; v++)
            RELAX(u, v);
    }
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (0 = no edge):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &w[i][j]);

    int s;
    printf("Enter source: ");
    scanf("%d", &s);

    DIJKSTRA(s);

    printf("\nVertex\tDist\tParent\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%d\t%d\n", i, d[i], pi[i]);

    return 0;
}