#include<stdio.h>
#include<stdlib.h>
#include"dll.h"
pos insbeg(pos po,int x){
    doubleLLnode *t;
    t->data=x;
    t->next=t->prev=NULL;
    if(po.first==NULL){
        t->next=t->prev=NULL;
        po.first=po.last=t;
        return po;
    }
    t->next=po.first;
    po.first->prev=t;
    po.first=t;
    return po;
}
pos inspos(pos po,int x,int p){
    doubleLLnode *t;
    t->data=x;
    t->prev=t->next=NULL;
    if(p==1 && po.first==NULL){
        t->next=NULL;
        po.first=t;
        return po;
    }
    if(p==1){
        t->next=po.first;
        po.first->prev=t;
        po.first=t;
        return po;
    }
    doubleLLnode *cur=po.first;
    int count=0;
    while(cur!=NULL && count!=p){
        cur=cur->next;
        count+=1;
    }
    t->next=cur;
    t->prev=cur->prev;
    cur->prev=t;
    cur->prev->next=t;
    return po;
}
pos insord(pos po,int x){
    doubleLLnode *t;
    t->data=x;
    t->prev=t->next=NULL;
    if(po.first=NULL){
        po.first=t;
        return po;
    }
    if(x<po.first->data){
        t->next=po.first;
        po.first->prev=t;
        po.first=t;
        return po;
    }
    doubleLLnode *cur=po.first;
    while (cur!=NULL && x<cur->data){
        cur=cur->next;
    }
    t->next=cur;
    t->prev=cur->prev;
    doubleLLnode *curprev;
    curprev=cur->prev;
    curprev->next=t;
    cur->prev=t;
    return po;
}
pos deletev(pos po,int x){
    doubleLLnode *cur=po.first;
    if(po.first->data==x){
        po.first=cur->next;
        cur->next->prev=NULL;
        free(cur);
        return po;
    }
    while(cur!=NULL && x!=cur->data){
        cur=cur->next;
    }
    doubleLLnode *dup=cur;
    cur->next->prev=cur->prev;
    cur->prev->next=cur->next;
    free(cur);
    return po;
}
void display(pos po){
    doubleLLnode *cur=po.first;
    while(cur!=NULL){
        printf("%d\n",cur->data);
        cur=cur->next;
    }
}