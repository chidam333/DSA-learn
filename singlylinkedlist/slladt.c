#include<stdio.h>
#include<stdlib.h>
#include"sll.h"
singlelinkedlistnode *insbegsll(int x,singlelinkedlistnode *first){
    singlelinkedlistnode *temp;
    temp=(singlelinkedlistnode *)malloc(sizeof(singlelinkedlistnode));
    temp->data=x;
    temp->link=NULL;
    temp->link=first;
    first=temp;
    return first;
}
singlelinkedlistnode *inspos(int x,singlelinkedlistnode *first,int p){
    singlelinkedlistnode *temp;
    temp=(singlelinkedlistnode *)malloc(sizeof(singlelinkedlistnode));
    temp->data=x;
    temp->link=NULL;
    if(first==NULL){
        first=temp;
        return first;        
    }
    singlelinkedlistnode *cur=first;
    int count = 0;
    while(count<p && cur->link!=NULL){
        cur=cur->link;
        count+=1;
    }
    temp->link=cur->link;
    cur->link=temp;
    return first;
}
singlelinkedlistnode *insord(int x,singlelinkedlistnode *first){
    singlelinkedlistnode *t;
    t=(singlelinkedlistnode *)malloc(sizeof(singlelinkedlistnode));
    t->data=x;
    t->link=NULL;
    if(first==NULL){
        first=t;
        return first;        
    }
    if(x<first->data){
        t->link=first;
        first=t;
        return first;
    }
    singlelinkedlistnode* p=NULL;
    singlelinkedlistnode* cur=first;
    while(cur!=NULL && cur->data<t->data){
        p=cur;
        cur=cur->link;
    }
    t->link=cur;
    p->link=t;
    return first;
}
singlelinkedlistnode *deletesllnode(int x,singlelinkedlistnode *first){
    singlelinkedlistnode *t;
    if(first==NULL){
        printf("there is nothing in here");
        return first;
    }
    else if(first->data==x){
        t=first;
        first=first->link;
    }
    else{
        singlelinkedlistnode *cur=first->link;
        singlelinkedlistnode *prev=first;
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
void display(singlelinkedlistnode *first){
    singlelinkedlistnode *cur=first;
    while(cur!=NULL){
        printf("\n %d",cur->data);
        cur=cur->link;
    }
    return;
}