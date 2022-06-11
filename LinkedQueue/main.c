#include<stdio.h>
#include"linkedque.c"
int main(){
    int op;
    queue q;
    q.front=q.rear=NULL;
    do{
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        scanf("%d",&op);
        switch(op){
            case 1:
                int x;
                printf("The value to be enqueued");
                scanf("%d",&x);
                q=enque(q,x);
                break;
            case 2:
                q=deque(q);
                break;
            case 3:
                display(q);
                break;
        }
    }while(op<4);
}