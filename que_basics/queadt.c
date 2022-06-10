#include<stdio.h>
#include<stdlib.h>
#include"que.h"
que q;
void create(int n){
    q.front=q.rear=-1;
    q.a=(int *)malloc(n*sizeof(int));
    q.size=n;
}
int isfull(){
    if(q.rear-q.front==q.size-1){return 1;}
    else{return 0;}
}
int isempty(){
    if(q.rear+1==q.front){q.rear=q.front=-1;return 1;}
    else{return 0;}
}
void enque(int x){
    if(isfull()==1){printf("The queue is full\n");return ;}
    else{
        q.rear+=1;
        if(q.front==-1){
            q.front=0;
        }
        q.a[q.rear]=x;
        printf("the element is enqued\n");
        return;
    }
}
int deque(){
    if(isempty()==1){printf("the que is empty\n");return 0;}
    else{
        int y = q.a[q.front];
        q.front+=1;
        return y;
    }
}