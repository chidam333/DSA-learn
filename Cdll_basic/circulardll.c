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
node *insord(node *first,int x){
    node *t;
    t=(node*)malloc(sizeof(node));
    t->x=x;
    if(first==NULL){
        t->next=t->prev=t;
        first=t;
        return first;
    }
    if(first->x>x){
        t->next=first;
        t->prev=first->prev;
        first->prev->next=t;
        first->prev=t;
        first=t;
        return first;
    }
    node *cur=first->next;
    while(cur!=first && cur->x<x){
        cur=cur->next;
    }
    t->next=cur;
    t->prev=cur->prev;
    cur->prev->next=t;
    cur->prev=t;
    return first;
}
node *deleteval(node* first,int x){
    if(first->x==x){
        first->next->prev=first->prev;
        first->prev->next=first->next;
        node *t=first;
        first=first->next;
        free(t);
        return first;
    }
    node *t=first->next;
    while(t!=first && x!=t->x){
        t=t->next;
    }
    t->next->prev=t->prev;
    t->prev->next=t->next;
    free(t);
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