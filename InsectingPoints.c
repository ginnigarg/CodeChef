#include <stdio.h>
#include <stdlib.h>

typedef struct Edges {
    int start;
    int end;
}Edges;

int comp(const void* a, const void* b) {
    return (Edges*)(a->start) - (Edges*)(b->start);
}

int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        int n;
        scanf("%d", &n);
        Edges arr[n] = (Edges *)malloc(sizeof(Edges) * n);
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &arr[i]->start, &arr[i]->end);
        }
        qsort(arr, sizeof(Edge), n, comp);
        


    }











}
