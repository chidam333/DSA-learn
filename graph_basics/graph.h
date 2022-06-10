#ifndef GRAPH_H
#define GRAPH_H
typedef struct enode
{
   int data;
   struct enode *link;
}node;

typedef struct vnode
{
  char name[10];
  int dist;
  int dfn;
  int visited;
  node *eptr;
}vertex;

typedef struct graph
{
  vertex v[10];
  int n;
}Graph;
void construct(Graph *g);
void initialize(Graph *g);
void BFS(Graph *g, int u);
void DFS(Graph *g, int u);
void display(Graph g);
#endif
