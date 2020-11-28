#include "main.h"

int main(){
    GraphType *g;
    g=(GraphType*)malloc(sizeof(GraphType));
    
    init(g);
    for(int i=0;i<4;i++){
        insert_vertex(g);
    }
    insert_edge(g,0,1);
    insert_edge(g,0,2);
    insert_edge(g,0,3);
    insert_edge(g,1,2);
    insert_edge(g,2,3);
    
    print_adj_list(g);
    // dfs(g,0);
    // dfs_stack(g,0);
    bfs(g,0);
    free(g);
}