#include<stdio.h>
#include<stdlib.h>
#include"poly.h"
polynomial createpoly(){
    polynomial p;
    p.first=p.last=NULL;
    int op;
    do{
        int coef,exp;
        printf("Enter the coeff and exp to be added :");
        scanf("%d%d",&coef,&exp);
        p=inspoly(p,coef,exp);
        printf("Press 0 to continue 1 to break:");
        scanf("%d",&op);
    }while(op<1);
    return p;
}
polynomial inspoly(polynomial p,int coef,int exp){
    node *t;
    t=(node *)malloc(sizeof(node));
    t->coef=coef;
    t->exp=exp;
    if(p.first==NULL){
        t->link=NULL;
        p.first=p.last=t;
        return p;
    }
    if(p.first->exp<exp){
        t->link=p.first;
        p.first=t;
        return p;
    }
    node *prev=NULL;
    node *cur=p.first;
    while(cur!=NULL && cur->exp>exp){
        prev=cur;
        cur=cur->link;
    }
    if(cur==NULL){
        p.last->link=t;
        t->link=NULL;
        p.last=t;
        return p;
    }
    t->link=cur;
    prev->link=t;
    return p;
}
void display(polynomial p){
    if(p.first==NULL){
        printf("Nothing in here to display");
    }
    node *cur=p.first;
    while(cur->link!=NULL){
        printf("%dx^%d+",cur->coef,cur->exp);
        cur=cur->link;
    }
    printf("%dx^%d",cur->coef,cur->exp);

}