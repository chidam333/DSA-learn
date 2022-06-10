#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

sta s;
void create(int n)
{
    s.a=(int *)malloc(n*sizeof(int));
    s.top=-1;
    s.size=n;
    printf("\n stack has been created");
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
    if(s.top<0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int n)
{
      if(isfull())
      {
           printf("\n the stack is full stcak ovrflows.");
           return;
      }
      s.top=s.top+1;
      printf("\n top=%d",s.top);
      s.a[s.top]=n;
      return;
}
int pop()
{
    int x;
    if(isempty())
    {
        printf("\n teh stack underflows cannot pop.");
        return 0;
    }
    x=s.a[s.top];
    s.top=s.top-1;
    printf("\ntop=%d",s.top);
    return x;
}
int peek()
{
    int x;
    if(isempty())
    {
        printf("\n the stack is empty cannot peek");
        return 0;
    }
    x=s.a[s.top];
    return x;
}