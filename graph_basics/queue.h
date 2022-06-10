#ifndef QUEUE_H
#define QUEUE_H
#define SIZE 100
 
typedef struct {
     int front, rear;
     int a[SIZE];
} Queue;

void createQueue(Queue *q);
int isEmpty(Queue q);
int isFull(Queue q);
void enqueue(Queue *q, int x);  
int dequeue(Queue *q);
#endif
