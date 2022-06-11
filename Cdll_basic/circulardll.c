#include<stdio.h>
#include<stdlib.h>
#include"circulardoublelinkedlist.h"
node *insbeg(node *first,int x){
    node *t;
    t=(node*)malloc(sizeof(node));
    t->x=x;
    if(first==NULL){
        t->next=t->prev=t;
        first=t;
        return first;
    }
    t->next=first;
    t->prev=first->prev;
    first->prev->next=t;
    first->prev=t;
    first=t;
    return first;
}
node *inspos(node *first,int x,int p){
    node *t;
    t=(node*)malloc(sizeof(node));
    t->x=x;
    if(first==NULL){
        t->next=t->prev=t;
        first=t;
        return first;
    }
    if(p==1){
        t->next=first;
        t->prev=first->prev;
        first->prev->next=t;
        first->prev=t;
        first=t;
        return first;}

    node *cur=first->next;
    int count = 2;
    while(cur!=first && count<p){
        cur=cur->next;
        count+=1;
    }
    t->next=cur;
    t->prev=cur->prev;
    cur->prev->next=t;
    cur->prev=t;
    return first;
}
void display(node *first){
    if(first==NULL){
        printf("there is nothing in here");
        return;
    }
    node *cur=first;
    while(cur->next!=first){
        printf("%d\n",cur->x);
        cur=cur->next;
    }
    printf("%d\n",cur->x);
}