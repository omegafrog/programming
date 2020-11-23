#include "adj_mat.h"


void init(GraphType* g){
    g->n=0;
}

void insert_vertex(GraphType* g){
    // 최대정점개수 초과시 종료.
    if(g->n+1>MAX_VERTEX){ printf("정점개수 초과.\n"); return;}
    // 정점개수 추가
    g->n++;
}

void insert_edge(GraphType* g, int u, int v){
    // if edge's start & end vertex is bigger than current graph's vertex
    // exit
    if(u>g->n || v>g->n){ printf("wrong edge.\n"); return;}
    // write adj_mat[u][v], adj_mat[v][u] to 1
    g->adj_mat[u][v]=g->adj_mat[v][u]=1;
}

void print_adj_mat(GraphType* g){
    for(int i=0;i<g->n;i++){
        for(int j=0;j<g->n;j++)
            printf("%d ",g->adj_mat[i][j]);
        printf("\n");
    }
}
