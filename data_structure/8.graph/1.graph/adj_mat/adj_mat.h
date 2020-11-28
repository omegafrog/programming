#ifndef __ADJ_MAT_H__
#define __ADJ_MAT_H__

#include <stdio.h>
#include <stdlib.h>

#include "TypeCQueue.h"

#define MAX_VERTEX 50
typedef struct GraphType{
	    int n; //num of vertex
	    int adj_mat[MAX_VERTEX][MAX_VERTEX];
}GraphType;

void init(GraphType* g); // init graph
void insert_vertex(GraphType* g); // insert new vertex
void insert_edge(GraphType* g, int u, int v); // insert new edge. u and v is start, end vertex
void print_adj_mat(GraphType* g); //print adj_mat*
void dfs(GraphType* g, int v); // deapth first search. v is root graphnode.
void bfs(GraphType*g, int v); // breath_first_search. v is root graphnode.
#endif
