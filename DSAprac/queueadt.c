#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
que q;
void create(int n)
{
    q.a=(int *)malloc(n*sizeof(int));
    q.front=-1;
    q.back=-1;
    q.size=n;
}
int isfull()
{
    if(q.back==q.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if(q.front==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void enque(int n)
{
    if(isfull())
    {
        printf("\the queue is full");
        return;
    }
    q.back=q.back+1;
    if(q.front==-1)
    {
        q.front=q.front+1;
    }
    printf("\n front =%d,reare=%d",q.front,q.back);
    q.a[q.back]=n;
    return;
}
int deque()
{
    int x;
    if(isempty())
    {
        printf("\n the queue is empty");
        return 0;
    }
    x=q.a[q.front];
    if(q.front==q.back)
    {
        q.front=q.back=-1;
    }
    else{
        q.front=q.front+1;
    }
     printf("\n front =%d,reare=%d",q.front,q.back);
    return x;
}