#include<stdio.h>
#include"poly.h"
#include<stdlib.h>
poly create()
{
    poly p;
    p.first=NULL;
    p.last=NULL;
    int c,e;
    int op=1;
    while(op==1)
    {
        printf("\n enter teh coef and expo: ");
        scanf("%d%d",&c,&e);
        p=insertinorder(p,e,c);
        printf("\n 1.enter more\n2.exir\n");
        scanf("%d",&op);
    }
   return p;
}
poly insertinorder(poly p,int expo,int coef)
{
    
    node *n,*cur,*prev;
    n=(node *)malloc(sizeof(node));
    n->coef=coef;
    n->expo=expo;
    n->link=NULL;
    if(p.first==NULL)
    {
        p.first=p.last=n;
        
    }
    else{
      
        prev=NULL;
        cur=p.first;
        
        while(cur!=NULL && cur->expo > n->expo)
        {
            prev=cur;
            cur=cur->link;
        }
       
        n->link=cur;

        prev->link=n;
        if(cur==NULL)
        {
            p.last=n;
         }
        

    }
    return p;
}
poly insertatend(poly p,int expo,int coef)
{
   
    node *n;
    n=(node *)malloc(sizeof(node));
    n->coef=coef;
    n->expo=expo;
    n->link=NULL;
    if(p.first==NULL)
    {
        p.first=p.last=n;
    }
    else{
        n->link=(p.last)->link;
        (p.last)->link=n;
        p.last=n;
    }
    return p;
}
void display(poly p)
{
    node *t;
    if(p.first==NULL)
    {
        printf("\n empty polynimial");
    }
    else
    {
        t=p.first;
        while(t->link!=NULL)
        {
            printf("%dx^%d +",t->coef,t->expo);
            t=t->link;
        }
       printf("%dx^%d =0",t->coef,t->expo);
    }

}
poly add(poly p,poly q)
{
    
    poly r;
    node *t1,*t2;
    t1=p.first;
    t2 = q.first;
    int c,e;
    r.first=r.last=NULL;

    while(t1!=NULL,t2!=NULL)
    {
        if(t1->expo>t2->expo)
        {
            r=insertatend(r,t1->expo,t1->coef);
            t1=t1->link;
        }
        else if(t2->expo>t1->expo)
        {
            r=insertatend(r,t2->expo,t2->coef);
            t2=t2->link;
        }
        else
        {
            c=t1->coef + t2->coef;
            if(c!=0)
            {
                r=insertatend(r,t1->expo,c);
                t1=t1->link;
                t2=t2->link;
            }
        }
    }
    while(t1!=NULL)
    {
        r=insertatend(r,t1->expo,t1->coef);
        t1=t1->link;
    }
    while(t2!=NULL)
    {
        r=insertatend(r,t2->expo,t2->coef);
    }
    return r;
}
void deletepoly(poly p)
{
	node *t=p.first;
	while(t!=NULL)
	{
		node *x=t;
		t=t->link;
		free(x);
	}
}
