#include "adj_list.h"

int visited[MAX_VERTEX]={0,};
void init(GraphType* g){
    for(int i=0;i<MAX_VERTEX;i++){
        g->adj_list[i]=NULL;
    }
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
    GraphNode* vNode=(GraphNode*)malloc(sizeof(GraphNode));
    vNode->n=v;
    vNode->link=NULL;
    
    if(now){
        while(now->link!=NULL){
            now=now->link;
        }
        // make new node for vertex v
        // append vertex v
    
        // if vertex u has another adj_list.
        now->link=vNode;
    }
    
    // vertex u doesn't has any adj_list
    // then (u,v)'s address is adj_list[u].
    else{g->adj_list[u]=vNode;}
}

void print_adj_list(GraphType* g){
    for(int i=0;i<g->n;i++){
        GraphNode* now = g->adj_list[i];
        
        printf("%d-> ",i);
        if(now){
            while(now->link!=NULL){
                printf("%d-> ",now->n);
                now=now->link;
            }
            printf("%d-> ",now->n);
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
        // go to next v's adj vertex.
        now=now->link;
    }
}

void dfs_stack(GraphType* g, int v){
    stackType* s = new_stack();
    push(s, v);
    
    while(!is_empty(s)){
        v=pop(s);
        
        // if v is not visited
        if(visited[v]==0){
            // v is visited.
            printf("%d-> ",v);
            visited[v]=1;
            
            GraphNode* now = g->adj_list[v];
            while(now!=NULL){
                push(s,now->n);
                
                now=now->link;
            }
        }
    }
    printf("\n");
}


void bfs(GraphType*g, int v){
    cqueue* q=(cqueue*)malloc(sizeof(cqueue));
    
    init_cQueue(q);
    
    enqueue(q,v);
    visited[v]=1;
    
    while(!is_empty_s(q)){
        v=dequeue(q);
        printf("%d-> ",v);
        
        GraphNode* now = g->adj_list[v];
        while(now!=NULL){
            if(visited[now->n]==0){
                enqueue(q,now->n);
                visited[now->n]=1;
            }
            now=now->link;
        }
    }
}
