 #define SIZE 100
 #include <stdio.h>
 #include "queue.h"

void createQueue(Queue *q)
{
      q->front = q->rear = -1;
}
   
int isEmpty(Queue q)
{
      if (q.front == -1)
           return 1;
       else
          return 0;
}
  
int isFull(Queue q)
{
      if (q.rear >= SIZE -1)
          return 1;
      else
         return 0;
}
 
void enqueue(Queue *q, int x)
{
     if (isFull(*q))
     {
           printf("Queue Overflows");
           return;
     }
     q->rear = q->rear+1;
     q->a[q->rear] = x;
     if (q->front == -1)
         q->front = 0;
}
  
int dequeue(Queue *q)
{
      int x;
      if (isEmpty(*q))
      {
          printf("Queue Underflows");
          return -1;
      }
      x = q->a[q->front];
      if (q->front == q->rear)
          q->front = q->rear = -1;
      else
          q->front = q->front + 1;
      return x;
}
