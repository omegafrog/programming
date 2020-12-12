#include "mst.h"

int parent[MAX_VERTEX];

void init_graph(GraphType* g){
    g->n=0;
    g->m=0;
}
void insert_edge(GraphType* g, int u, int v, int w){
    g->Edges[g->m].u=u;
    g->Edges[g->m].v=v;
    g->Edges[g->m].weight=w;
    g->m++;
}
void kruskal(GraphType* g){
    // priority queue to contain all edges in G.
    queue* Q=(queue*)malloc(sizeof(queue));
    
    init_queue(Q);
    
	
		// 
    for(int i=0;i<g->m;i++){
		element item={{g->Edges[i].u,g->Edges[i].v,g->Edges[i].weight},g->Edges[i].weight};
        enqueue(Q,item);
    }
    
    int ecounter =0;
    for(int i=0;i<g->n;i++){
		parent[i]=-1;
	}
    while(ecounter<g->n-1){
        element E1;
		E1=dequeue_min(Q);
        // if E1 is not include cycle,
        if(find(E1.link.u)!=find(E1.link.v)){
            ecounter++;
            // add E1 to T
            printf(" edge (%d, %d) %d is selected.\n",E1.link.u,E1.link.v,E1.weight);
            // merge u, v into one cluster(cycle)
            Union(E1.link.u,E1.link.v);
        }
        
    }
}

void Union(int a, int b){
    int root1=find(a);
    int root2=find(b);
    
    if(root1!=root2)
        parent[root1]=root2;
}

int find(int curr){
    if(parent[curr]!=-1)
        find(parent[curr]);
    else return curr;
}