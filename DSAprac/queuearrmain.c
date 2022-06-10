#include<stdio.h>
#include"queueadt.c"
int main()
{
    int x,op=1,size;
    printf("\n enter the suze of teh queue:");
    scanf("%d",&size);
    create(size);
    while(op<3)
    {
        printf("\n enter ur choice\n1.enque\n2.deque\n3.exit\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: printf("\n enter the number u want to enque:");
                    scanf("%d",&x);
                    enque(x);
                    break;
            case 2:x=deque();
                   if(x!=0)
                   {
                       printf("\n %d is dequed",x);
                   }
                   break;
        }
    }
    return 0;
}