#include<stdio.h>
#include"polyadt.c"
int main()
{
    poly a,b,c;
    a=create();
    printf("\n poly a:\n");
    display(a);
    b=create();
    printf("\n poly b:\n");
    display(b);
    c=add(a,b);
    printf("\npoly c: \n");
    display(c);
    deletepoly(a);
    deletepoly(b);
    deletepoly(c);
    
    return 0;
    
}
