#ifndef __MST_H__
#define __MST_H__

#include <stdio.h>
#include <stdlib.h>

#include "./linearQueue/src/TypeLQueue.h"




typedef struct GraphType{
    int n,m; // n : num of vertex, m :  num of edges
    struct edge Edges[2*MAX_VERTEX]; // edge array.
}GraphType;

void init_graph(GraphType* g);
void insert_edge(GraphType* g, int u, int v, int w);
void kruskal(GraphType* g);
void Union(int a, int b);
int find(int curr);
#endif