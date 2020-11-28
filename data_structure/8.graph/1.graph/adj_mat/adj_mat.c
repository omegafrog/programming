#include "adj_mat.h"

int visited[MAX_VERTEX]={0,};

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

void dfs(GraphType* g, int v){
    // vertex v is visited.
    printf("%d-> ",v);
    visited[v]=1;
    
    // find v's adj vertex.
    for(int i=0;i<g->n;i++){
        // that vertex is not visited, do dfs(g,i)
        if(g->adj_mat[v][i]==1 && visited[i]==0)
            dfs(g, i);
    }
}

void bfs(GraphType*g, int v){
    cqueue* q=(cqueue*)malloc(sizeof(cqueue));
    init_cQueue(q);
    
    enqueue(q, v);
    while(!is_empty(q)){
        v=dequeue(q);
        printf("%d-> ",v);
        
        for(int i=0;i<g->n;i++){
            if(visited[i]==0){
                enqueue(q,i);
                visited[i]=1;
            }
        }
    }
}