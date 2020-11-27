#include "main.h"

int main(){
    GraphType *g;
    g=(GraphType*)malloc(sizeof(GraphType));
    
    init(g);
    for(int i=1;i<4;i++)
        insert_vertex(g);
    insert_edge(g,0,1);
    insert_edge(g,0,2);
    insert_edge(g,0,3);
    insert_edge(g,1,2);
    insert_edge(g,2,3);
    
    print_adj_mat(g);
    dfs(g,0);
    // GraphType* g2;
    // g2=(GraphType*)malloc(sizeof(GraphType));
    // init_list(g2);
    // for(int i=0;i<4;i++)
    //     insert_vertex_list(g);
    // insert_edge_list(g,0,1);
    // insert_edge_list(g,0,2);
    // insert_edge_list(g,0,3);
    // insert_edge_list(g,1,2);
    // insert_edge_list(g,2,3);
    // print_adj_mat(g);
    // print_adj_list(g2);
    free(g);
}