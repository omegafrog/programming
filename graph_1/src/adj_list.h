#ifndef __ADJ_LIST_H__
#define __ADJ_LIST_H__

#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX 50

// structure to make adjacent vertex.
typedef struct GraphNode{
    int n; // vertex number
    struct GraphNode *link; // pointer var for next vertex.
}GraphNode;
typedef struct GraphType{
    int n; // num of vertex
    GraphNode* adj_list[MAX_VERTEX];
}GraphType;

void init_list(GraphType* g); // init new graph
void insert_vertex_list(GraphType* g); // insert new vertex
void insert_edge_list(GraphType* g, int u, int v); // insert new edge. u & v is start, end vertex.
void print_adj_list(GraphType* g);

#endif