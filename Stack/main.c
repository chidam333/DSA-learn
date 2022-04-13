#include<stdio.h>
#include "arraystack.c"
int main(){
    int max,op,ele,i=0;
    printf("The max amount of terms in the stack ");
    scanf("%d",&max);
    createstack(max);
    while(i<1){
        printf("The operation you would want to perform");
        scanf("%d",&op);
        switch (op){
            case 1:
                printf("Enter the element to be entered");
                scanf("%d",&ele);
                push(ele,max);
                break;
            case 2:
                pop();
                break;
            case 3:
                i=1;
                break;
        }
    }
}