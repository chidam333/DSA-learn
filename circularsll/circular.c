#include<stdio.h>
#include<stdlib.h>
#include"circularsll.h"
circularlinkedlistnode *insbegcll(int x,circularlinkedlistnode *first){
    circularlinkedlistnode *temp;
    circularlinkedlistnode *cur=first;
    temp=(circularlinkedlistnode *)malloc(sizeof(circularlinkedlistnode));
    temp->data=x;
    if(first==NULL){
        temp->link=temp;
        first=temp;
        return first;
    }
    while(cur->link!=first){
        cur=cur->link;
    }
    cur->link=temp;
    temp->link=first;
    first=temp;
    return first;
}
circularlinkedlistnode *inspos(int x,circularlinkedlistnode *first,int p){
    circularlinkedlistnode *temp;
    temp=(circularlinkedlistnode *)malloc(sizeof(circularlinkedlistnode));
    temp->data=x;
    temp->link=NULL;
    if(first==NULL){
        temp->link=temp;
        first=temp;
        return first;        
    }
    circularlinkedlistnode *cur=first;
    int count = 0;
    while(count<p && cur->link!=first){
        cur=cur->link;
        count+=1;
    }
    temp->link=cur->link;
    cur->link=temp;
    return first;
}
circularlinkedlistnode *insord(int x,circularlinkedlistnode *first){
    circularlinkedlistnode *t;
    t=(circularlinkedlistnode *)malloc(sizeof(circularlinkedlistnode));
    t->data=x;
    t->link=NULL;
    if(first==NULL){
        t->link=t; 
        first=t;
        return first;        
    }
    if(x<first->data){
        circularlinkedlistnode *cur=first;
        while(cur->link!=first){
            cur=cur->link;
        }
        cur->link=t;
        t->link=first;
        first=t;
        return first;
    }
    circularlinkedlistnode* p=NULL;
    circularlinkedlistnode* cur=first;
    while(cur->link!=first && cur->data<t->data){
        p=cur;
        cur=cur->link;
    }
    t->link=cur;
    p->link=t;
    return first;
}
circularlinkedlistnode *deletesllnode(int x,circularlinkedlistnode *first){
    circularlinkedlistnode *t;
    if(first==NULL){
        printf("there is nothing in here");
        return first;
    }
    else if(first->data==x){
        t=first;
        first=first->link;
    }
    else{
        circularlinkedlistnode *cur=first->link;
        circularlinkedlistnode *prev=first;
        while(cur!=NULL && cur->data!=x){
            prev=cur;
            cur=cur->link;
        }
        if(cur==NULL){printf("Element not there ! ");}
        else{
            prev->link=cur->link;
            t=cur;
        }
    }
    free(t);
    return first;

}
void display(circularlinkedlistnode *first){
    circularlinkedlistnode *cur=first;
    while(cur->link!=first){
        printf("\n %d",cur->data);
        cur=cur->link;
    }
    return;
}