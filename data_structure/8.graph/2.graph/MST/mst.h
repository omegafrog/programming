#ifndef __MST_H__
#define __MST_H__

#define MAX_VERTEX 50

struct edge{
    int u,v; // start, end vertex.
    int weight; // weight.
}

typedef struct GraphType{
    int n; // num of vertex
    struct edge[2*MAX_VERTEX]; // edge array.
}

void kruskal(GraphType* g, )