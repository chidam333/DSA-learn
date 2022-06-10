#include<stdio.h>
#include"stackadt.c"
int main(){
    int op;
    do
    {
        printf("1.Create\n2.Push\n3.Pop\n4.Exit\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            int size;
            printf("Size of the stack :");
            scanf("%d",&size);
            create(size);
            break;
        case 2:
            int x;
            printf("The element to be inserted :");
            scanf("%d",&x);
            push(x);
            break;
        case 3:
            pop();
            break;
        }
    } while (op<4);
}
