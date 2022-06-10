#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "queue.c"
int count = 0;
void construct(Graph *g)
{
	int i, j, m, adj;
	node *p;
	char filename[20];
	FILE *fp;
	printf( "Enter the name of the file : ");
	scanf("%s", filename);
	fp = fopen(filename, "r");
	fscanf(fp, "%d", &g->n);
	for (i=0; i<g->n; i++)
	{
//	  printf( "Enter the name of the vertex ");
	  fscanf(fp, "%s", g->v[i].name);
	  g->v[i].eptr=NULL;
//	  printf( "Enter no. of adjacent vertices for %s ", g->v[i].name);
	  fscanf(fp, "%d", &m);
	  for (j=0; j<m; j++)
	  {
//	    printf( "Enter the index of  %dth adjacent vertex for %s", j,  g->v[i].name);
	    fscanf(fp, "%d", &adj);
	    p=(node *) malloc(sizeof(node));
	    p->data=adj;
	    p->link=NULL;
	    if (g->v[i].eptr == NULL)
	       g->v[i].eptr=p;
	    else
	    {
	      p->link = g->v[i].eptr;
	      g->v[i].eptr = p;
	    }
	  }
	}
}
void initialize(Graph *g)
{
    int i;
	for (i=0; i<g->n; i++)
	{
	   g->v[i].dist=0;
	   g->v[i].dfn = 0;
	   g->v[i].visited=0;
	}
}
void BFS(Graph *g, int u)
{
    Queue q;
	node *t;
	int w;
	createQueue(&q);
	initialize(g);
	g->v[u].dist=0;
	g->v[u].visited=1;
	enqueue(&q, u);
	while (!isEmpty(q))
	{
	  u=dequeue(&q);
	  t=g->v[u].eptr;
	  while (t!= NULL)
	  {
	    w=t->data;
	    if (g->v[w].visited == 0)
	    {
	      g->v[w].dist = g->v[u].dist+1;
	      g->v[w].visited = 1;
	      printf( "\n%s  --> %s", g->v[u].name, g->v[w].name);
	      enqueue(&q,w);
	    }
	    t = t->link;
	  }
	}
}
void DFS(Graph *g, int u)
{
       node *t;
       int w;
       count++;
       g->v[u].dfn=count;
       g->v[u].visited=1;
       t=g->v[u].eptr;
       while (t!=NULL)
       {
	  w=t->data;
	  if (g->v[w].visited == 0)
	  {
	     printf("\n%s --> %s ",  g->v[u].name,  g->v[w].name);
	     DFS(g, w);
	  }
	  t=t->link;
       }
}
void display(Graph g)
{
       int i;
       printf("No.\tName\tAdjacent Node List \n");
       for (i=0; i<g.n; i++)
       {
	  printf("%d\t%s\t", i, g.v[i].name);
	  node *t=g.v[i].eptr;
	  while (t!=NULL)
	  {
	    printf( "--> %d", t->data);
	    t=t->link;
	  }
	  printf("\n");
       }
       printf( "Edges used in the traversal are : ");
}
