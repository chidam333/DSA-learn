#include<stdio.h>
#include"Linkedstack.c"
int main(){
    node *top=NULL;
    int op;
    do{
        printf("\n1.Push\n2.Pop\n3.Display");
        scanf("%d",&op);
        switch(op){
            case 1:
                int x;
                printf("\nWhat do you want to push ");
                scanf("%d",&x);
                top=push(top,x);
                printf("DONE");
                break;
            case 2:
                top=pop(top);
                break;
            case 3:
                display(top);
                break;
        }
    }
    while(op<4);
}