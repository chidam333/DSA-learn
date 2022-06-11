#include<stdio.h>
#include<stdlib.h>
#include"Linkedstack.h"

node* push(node *top,int x){
    node *t;
    t=(node *)malloc(sizeof(node));
    t->x=x;
    t->link=NULL;
    if(top==NULL){
        top=t;
        return top;
    }
    t->link=top;
    top=t;
    return top;
}
node* pop(node *top){
    if(top==NULL){
        printf("The stack is empty");
        return top;
    }
    node *t=top;
    top=top->link;
    free(t);
    return top;
}
void display(node *top){
    node *cur=top;
    while(cur!=NULL){
        printf("%d\n",cur->x);
        cur=cur->link;
    }
}