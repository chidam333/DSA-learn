#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
stack s;
void create(int n){
    s.a=(int *)malloc(n*sizeof(int));
    s.size=n;
    s.top=-1;
    printf("Stack is initiated\n");
}
int isempty(){
    if(s.top==-1){return 1;}
    else{return 0;}
}
int isfull(){
    if(s.top==s.size-1){return 1;}
    else{return 0;}
}
void push(int x){
    if(isfull()==1){printf("The stack is full\n");return;}
    else{
        s.top=s.top+1;
        printf("s.top is %d\n",s.top);
        s.a[s.top]=x;
        printf("the element is pushed !\n");
        return;
    }
}
int pop(){
    printf("s.top is %d\n",s.top);
    if(isempty()==1){printf("The stack is empty\n");return 0;}
    else{
        int x=s.a[s.top];
        printf("the popped element is %d\n",x);
        s.top=s.top-1;
        return x;
    }
}