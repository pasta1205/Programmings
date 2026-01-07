#include <stdio.h>
#include <limits.h>

#define MAXN 100
#define INF INT_MAX

int n;                       
int W[MAXN][MAXN];           

void readGraph() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter adjacency matrix (use -1 for no edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &W[i][j]);
            if (W[i][j] == -1)
                W[i][j] = INF; 
        }
    }
}

int extractMin(int key[], int inMST[]) {
    int min = INF, minIndex = -1;
    for (int v = 0; v < n; v++) {
        if (!inMST[v] && key[v] < min) {
            min = key[v];
            minIndex = v;
        }
    }
    return minIndex;
}

void prim(int root) {
    int key[MAXN];
    int parent[MAXN];
    int inMST[MAXN];

    for (int i = 0; i < n; i++) {
        key[i] = INF;
        parent[i] = -1;
        inMST[i] = 0;
    }

    key[root] = 0;

    for (int count = 0; count < n; count++) {
        int u = extractMin(key, inMST);
        if (u == -1) break;

        inMST[u] = 1;

        for (int v = 0; v < n; v++) {
            if (!inMST[v] && W[u][v] != INF && W[u][v] < key[v]) {
                key[v] = W[u][v];
                parent[v] = u;
            }
        }
    }

    printf("\nMinimum Spanning Tree (MST):\n");
    printf("Edge\tWeight\n");

    int total = 0;
    for (int v = 0; v < n; v++) {
        if (parent[v] != -1) {
            printf("%d - %d\t%d\n", parent[v], v, W[parent[v]][v]);
            total += W[parent[v]][v];
        }
    }

    printf("\nTotal weight of MST = %d\n", total);
}

int main() {
    readGraph();

    int start;
    printf("\nEnter the starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    prim(start);
    return 0;
}