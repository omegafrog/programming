#include "adj_list.h"

void init_list(GraphType* g){
    g->n=0;
}

void insert_vertex_list(GraphType* g){
    // if vertex is full
    if(g->n+1>MAX_VERTEX){
        printf("vertex is full.\n");
        return;
    }
    g->n++;
}

void insert_edge_list(GraphType* g, int u, int v){
    // if edge's start & end vertex is bigger than current graph's vertex
    // exit
    if(u>g->n || v>g->n){ printf("wrong edge.\n"); return;}
    
    //go to adj_list[u]'s last node.
    GraphNode* now=g->adj_list[u];
    while(now->link!=NULL){
        now=now->link;
    }
    // make new node for vertex v
    GraphNode vNode={v,NULL};
    // append vertex v
    now->link=&vNode;
}

void print_adj_list(GraphType* g){
    for(int i=0;i<g->n;i++){
        GraphNode* now = g->adj_list[i];
        // now!=NULL vs now->link!=NULL : now!=NULL is dangerous. because in while loop, it uses now->next(--NULL). and die.
        while(now->link!=NULL){
            printf("%d->",now->n);
            now=now->link;
        }
        printf("NULL\n");
    }
}