#include<stdio.h>
#include<stdlib.h>
#include"infix.h"
sta s;
void create()
{
    s.top=-1;
    s.a=(char*)malloc(50*sizeof(char));
    s.size=50;
    printf("\n stack created succesfully");
}
int isempty()
{
    //printf("\n inside is empty");
    if(s.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(char x)
{
    //printf("\n inside push");
    s.top=s.top+1;
    //printf("\n top=%d",s.top);
    s.a[s.top]=x;
}
char pop()
{
     //printf("\n inside pop");
    char x;
    x=s.a[s.top];
    s.top=s.top-1;
    return x;
}
