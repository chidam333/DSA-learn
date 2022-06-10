#include<stdio.h>
#include<stdlib.h>
#include"hanoiadt.h"
stack s;
void create(int n)
{
    s.top=-1;
    s.a=(element *)malloc(sizeof(element));
    s.size=n;
    printf("\n stack created succesfully");
}
int isfull()
{
    if(s.top>=s.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if (s.top<=-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(element x)
{
    if(isfull())
    {
        printf("\n the stack is full");
        return;
    }
    else
    {
       s.top=s.top+1;
       s.a[s.top]=x;
    }
}
element pop()
{
    element x;
    if(isempty())
    {
        printf("\n the stack is empty");
    }
    else
    {
        x=s.a[s.top];
        s.top=s.top-1;
        return x;
    }
}
element peek()
{
    element x;
    if(isempty())
    {
        printf("\n stack is empty");
    }
    x=s.a[s.top];
    return x;
}
