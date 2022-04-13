#include<stdio.h>
#include<stdlib.h>
#include "stackADT.h"
void createstack(int max){
    s.top=-1;
    s.a=(int *)malloc(max*sizeof(int));
}
int isEmpty(){
    if(s.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(int max){
    if(s.top==max-1){return 1;}
    else{return 0;}
}
void push(int n,int max){
    if(isFull(max)==1){
        printf("The stack is overflowing\n");
    }
    else{
        s.top+=1;
        s.a[s.top]=n;
    }
}
int pop(){
    if(isEmpty()==1){
        printf("The stack is underflowing\n ");
    }
    else{
        printf("The dequed element is %d\n",s.a[s.top]);
        s.top-=1;
    }
}