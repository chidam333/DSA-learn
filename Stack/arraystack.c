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
    if(isFull(max)){
        printf("The stack is overflowing");
    }
    else{
        s.top+=1;
        s.a[s.top]=n;
        printf("Success");
    }
}
int pop(){
    if(isEmpty()){
        printf("The stack is underflowing ");
    }
    else{
        printf("The dequed element is %d",s.a[s.top]);
        s.top-=1;
    }
}