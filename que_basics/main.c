#include<stdio.h>
#include"queadt.c"
int main(){
    int op;
    do
    {
        printf("1.Create\n2.Enque\n3.Deque\n4.Exit\n");
        scanf("%d",&op);
        switch(op){
            case 1:
                int n;
                printf("Enter the size of the queue : ");
                scanf("%d",&n);
                create(n);
                break;
            case 2:
                int x;
                printf("Enter the element to be entered :");
                scanf("%d",&x);
                enque(x);
                break;
            case 3:
                printf("%d is dequed \n",deque());
        }
    } while (op<4);
    
}