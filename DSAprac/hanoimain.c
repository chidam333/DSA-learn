#include<stdio.h>
#include"hanoi.c"
#include"math.h"
int main()
{
    int n,moves=0;
    printf("\n enter teh no.of discs:");
    scanf("%d",&n);
    create((int)pow(2,n));
    element t={n,'a','b','c',18};
    step2:
           push(t);
           t=peek();
           if(t.n==0)
           {
               goto stepra;
           }
           else
           {
               element x={t.n-1,t.sn,t.dn,t.in,9};
               t=x;
               goto step2;
           }
    step9:
           t=pop();
           t=peek();
           printf("\n move disc %d from %c to %c",t.n,t.sn,t.dn);
           moves++;
           t=peek();
           element x1={t.n-1,t.in,t.sn,t.dn,15};
           t=x1;
           goto step2;
    step15:t=pop();
           t=peek();
           goto stepra;
    stepra:
    switch(t.ra)
    {
        case 2:goto step2;
        case 9:goto step9;
        case 15:goto step15;
        case 18:goto step18;
    }
    step18:
    printf("\n no.of move = %d",moves);
    return 0;
}
