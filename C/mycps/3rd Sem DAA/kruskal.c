#include <stdio.h>

#define MAX 100

typedef struct {
    int u, v, w;
} Edge;

int parent[MAX], rnk[MAX];

void make_set(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rnk[i] = 0;
    }
}

int find_set(int x) {
    while (parent[x] != x)
        x = parent[x];
    return x;
}

void union_set(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if (a == b) return;

    if (rnk[a] < rnk[b]) parent[a] = b;
    else if (rnk[b] < rnk[a]) parent[b] = a;
    else {
        parent[b] = a;
        rnk[a]++;
    }
}

void sort_edges(Edge E[], int m) {
    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
            if (E[i].w > E[j].w) {
                Edge temp = E[i];
                E[i] = E[j];
                E[j] = temp;
            }
}

void kruskal(Edge E[], int m, int n) {
    sort_edges(E, m);
    make_set(n);

    int mst_weight = 0, count = 0;

    printf("Edges in MST:\n");

    for (int i = 0; i < m && count < n - 1; i++) {
        int u = E[i].u;
        int v = E[i].v;

        if (find_set(u) != find_set(v)) {
            union_set(u, v);
            printf("%d - %d  (%d)\n", u, v, E[i].w);
            mst_weight += E[i].w;
            count++;
        }
    }

    printf("Total Weight of MST = %d\n", mst_weight);
}

int main() {
    int n, m;
    Edge E[MAX];

    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &n, &m);

    printf("Enter edges (u v w):\n");
    for (int i = 0; i < m; i++)
        scanf("%d %d %d", &E[i].u, &E[i].v, &E[i].w);

    kruskal(E, m, n);

    return 0;
}