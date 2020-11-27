#include "adj_list.h"

int visited[MAX_VERTEX]={0,};
void init(GraphType* g){
    g->n=0;
}

void insert_vertex(GraphType* g){
    // if vertex is full
    if(g->n+1>MAX_VERTEX){
        printf("vertex is full.\n");
        return;
    }
    g->n++;
}

void insert_edge(GraphType* g, int u, int v){
    // if edge's start & end vertex is bigger than current graph's vertex
    // exit
    if(u>g->n || v>g->n){ printf("wrong edge.\n"); return;}
    
    //go to adj_list[u]'s last node.
    GraphNode* now=g->adj_list[u];
    GraphNode vNode;
    vNode.n=v;
    vNode.link=NULL;
    
    if(now){
        while(now->link!=NULL){
            now=now->link;
        }
        // make new node for vertex v
        // append vertex v
    
        // if vertex u has another adj_list.
        now->link=&vNode;
    }
    
    // vertex u doesn't has any adj_list
    // then (u,v)'s address is adj_list[u].
    g->adj_list[u]=&vNode;
}

void print_adj_list(GraphType* g){
    for(int i=0;i<g->n;i++){
        GraphNode* now = g->adj_list[i];
        
        if(now){
            while(now->link!=NULL){
                printf("%d->",now->n);
                now=now->link;
            }
        }
        printf("NULL\n");
        
    }
}

void dfs(GraphType* g, int v){
    // vertex v is visited.
    printf("%d-> ",v);
    visited[v]=1;
    
    // find v's adj vertex.
    GraphNode* now=g->adj_list[v];
    // that vertex is not visited, do dfs(g, i)
    while(now!=NULL){
        if(visited[now->n]==0) dfs(g, now->n);
    }
}