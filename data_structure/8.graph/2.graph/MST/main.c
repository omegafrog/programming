#include "main.h"

int main(){
    GraphType* g;
    g = (GraphType*)malloc(sizeof(GraphType));
    
    init_graph(g);
    
    g->n=7;
    
    insert_edge(g,0,1,29);
    insert_edge(g,1,2,16);
    insert_edge(g,2,3,12);
    insert_edge(g,3,4,22);
    insert_edge(g,4,5,27);
    insert_edge(g,5,0,10);
    insert_edge(g,6,1,15);
    insert_edge(g,6,4,25);
    
    kruskal(g);
    free(g);
}