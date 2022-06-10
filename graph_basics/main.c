#include <stdio.h>
#include <stdlib.h>
#include "graph.c"
int main()
{
  Graph G;
  int s, op;
  construct(&G);
  do{
    printf( "1- BFS  2- DFS 3- Exit \nEnter your option " );
    scanf("%d", &op);
    switch (op){
      case 1:
          printf( "Enter the index of starting vertex ");
          scanf("%d", &s);
          initialize(&G);
          display(G);
          BFS(&G, s);
          printf("\n");
          break;
      case 2:
          printf( "Enter the index of starting vertex ");
          scanf("%d", &s);
          initialize(&G);
          display(G);
          DFS(&G, s);
          printf("\n");
          break;
    }
  }while (op < 3);
  return 0;
}
