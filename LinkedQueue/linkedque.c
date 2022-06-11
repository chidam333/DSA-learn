#include<stdio.h>
#include<stdlib.h>
#include"linkedque.h"
queue enque(queue q,int x){
    linkedquenode *t;
    t=(linkedquenode*)malloc(sizeof(linkedquenode));
    t->data=x;
    if(q.front==NULL){
        t->link=NULL;
        q.front=q.rear=t;
        return q;
    }
    t->link=q.front;
    q.front=t;
    return q;
}
queue deque(queue q){
    if(q.rear==NULL){
        printf("Nothing in hear !");
        return q;
    }
    if(q.rear==q.front){
        linkedquenode *temp=q.rear;
        q.front=q.rear=NULL;
        free(temp);
        return q;
    }
    linkedquenode *temp=q.rear;
    linkedquenode *cur=q.front;
    while(cur->link!=q.rear){cur=cur->link;}
    q.rear=cur;
    free(temp);
    cur->link=NULL;
    return q;
}
void display(queue q){
    linkedquenode *cur=q.front;
    while(cur!=q.rear){
        printf("%d\n",cur->data);
        cur=cur->link;
    }
    printf("%d\n",q.rear->data);
}