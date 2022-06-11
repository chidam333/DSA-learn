#include<stdio.h>
#include<stdlib.h>
#include"dll.h"

dll inspos(dll d,int x,int p){
    dllnode *t;
    t=(dllnode*)malloc(sizeof(dllnode));
    t->data=x;
    if(d.first==NULL){
        t->next=t->prev=NULL;
        d.first=d.last=t;
        return d;
    }
    if(p==1){
        t->next=d.first;
        t->prev=NULL;
        d.first->prev=t;
        d.first=t;
        return d;
    }
    dllnode *cur=d.first;
    int count=1;
    while(cur!=d.last && count<p){
        cur=cur->next;
        count+=1;
    }
    if(cur==d.last && count+1==p){
        t->next=NULL;
        t->prev=cur;
        cur->next=t;
        d.last=t;
        return d;
    }
    t->next=cur;
    t->prev=cur->prev;
    cur->prev->next=t;
    cur->prev=t;
    return d;
}
dll deleteval(dll d,int x){
    if(d.first==NULL){printf("The double linked list is empty");return d;}
    dllnode* cur=d.first;
    while(cur!=d.last && cur->data!=x){
        cur=cur->next;
    }
    if(cur->data==x && cur==d.first){
        cur->next->prev=NULL;
        d.first=cur->next;
        free(cur);
        return d;
    }
    if(cur->data==x && cur==d.last){
        cur->prev->next=NULL;
        d.last=cur->prev;
        free(cur);
        return d;
    }
    if(cur->data==x){
        cur->next->prev=cur->prev;
        cur->prev->next=cur->next;
        free(cur);
        return d;
    }
}
void display(dll d){
    dllnode *cur=d.first;
    while(cur!=d.last){
        printf("%d\n",cur->data);
        cur=cur->next;
    }
    printf("%d",d.last->data);
}