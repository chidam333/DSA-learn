#include<stdio.h>
#include"stackadt.c"
int main()
{
    int x,op=1;
    int size;
    printf("\n enter the siaze of the stack :");
    scanf("%d",&size);
    create(size);
    while(op<4)
    {
        printf("\n enter \n1.push\n2.pop\n3.peek\n4.exit");
        scanf("%d",&op);
        switch(op)
        {
            case 1:printf("\n enter the number u want to push :");
                   scanf("%d",&x);
                   push(x);
                   break;
            case 2:x=pop();
                   if(x!=0)
                   {
                       printf("\n %d has been popped",x);
                   }
                   break;
            case 3:x=peek();
                   if(x!=0)
                   {
                       printf("\n element at top=%d",x);
                   }
                   break;
        }
    }
    return 0;
}