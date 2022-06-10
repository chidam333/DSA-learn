#include<stdio.h>
#include<stdlib.h>
#include"dll.h"
doubleLLnode* insbeg(doubleLLnode *first,doubleLLnode *last,int x){
    doubleLLnode *t;
    t->data=x;
    t->next=t->prev=NULL;
    if(first==NULL){
        t->next=t->prev=NULL;
        first=last=t;
        return first;
    }
    t->next=first;
    first->prev=t;
    first=t;
    return first;
}
doubleLLnode* inspos(doubleLLnode *first,doubleLLnode *last,int x,int p){
    doubleLLnode *t;
    t->data=x;
    t->prev=t->next=NULL;
    if(p==1 && first==NULL){
        t->next=NULL;
        first=t;
        return first;
    }
    if(p==1){
        t->next=first;
        first->prev=t;
        first=t;
        return first;
    }
    doubleLLnode *cur=first;
    int count=0;
    while(cur!=NULL && count!=p){
        cur=cur->next;
        count+=1;
    }
    t->next=cur;
    t->prev=cur->prev;
    cur->prev=t;
    cur->prev->next=t;
    return first;
}
doubleLLnode* insord(doubleLLnode *first,doubleLLnode *last,int x){
    doubleLLnode *t;
    t->data=x;
    t->prev=t->next=NULL;
    if(first=NULL){
        first=t;
        return first;
    }
    if(x<first->data){
        t->next=first;
        first->prev=t;
        first=t;
        return first;
    }
    doubleLLnode *cur=first;
    while (cur!=NULL && x<cur->data){
        cur=cur->next;
    }
    t->next=cur;
    t->prev=cur->prev;
    doubleLLnode *curprev;
    curprev=cur->prev;
    curprev->next=t;
    cur->prev=t;
    return first;
}
doubleLLnode* deletev(doubleLLnode *first,doubleLLnode *last,int x){
    doubleLLnode *cur=first;
    if(first->data==x){
        first=cur->next;
        cur->next->prev=NULL;
        free(cur);
        return first;
    }
    while(cur!=NULL && x!=cur->data){
        cur=cur->next;
    }
    doubleLLnode *dup=cur;
    cur->next->prev=cur->prev;
    cur->prev->next=cur->next;
    free(cur);
    return first;
}
void display(doubleLLnode *first,doubleLLnode *last){
    doubleLLnode *cur=first;
    while(cur!=NULL){
        printf("%d\n",cur->data);
        cur=cur->next;
    }
}