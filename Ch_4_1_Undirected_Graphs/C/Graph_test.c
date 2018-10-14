#include <stdio.h>
#include "Graph.h"

int main(int argc, char const *argv[]) {
    
    struct G *g = createGraph(13);

    addEdge(g, 0, 1);
    addEdge(g, 0, 2);
    addEdge(g, 0, 6);
    addEdge(g, 0, 5);
    addEdge(g, 3, 5);
    addEdge(g, 3, 4);
    addEdge(g, 5, 4);
    addEdge(g, 6, 4);
    addEdge(g, 7, 8);
    addEdge(g, 9, 10);
    addEdge(g, 9, 11);
    addEdge(g, 9, 12);
    addEdge(g, 11, 12);

    mark(g, 3);
    mark(g, 5);
    mark(g, 8);
    mark(g, 3);
    mark(g, 9);
    mark(g, 12);

    printf("%s", toString(g));

    for (int i = 0; i < g->vertex_count; i++)
        if (marked(g, i))
            printf("%d marked!\n", i);

    destroyGraph(&g);

    return 0;
}