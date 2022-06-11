#include<stdio.h>
#include"dll.c"
int main(){
    int op;
    dll d;
    d.first=d.last=NULL;
    do{
        printf("\n1.Inspos\n2.Delete\n3.Display\n4.Exit");
        scanf("%d",&op);
        switch(op){
            case 1:
                int x;
                printf("The value to be inserted");
                scanf("%d",&x);
                int p;
                printf("The position to be inserted at");
                scanf("%d",&p);
                d=inspos(d,x,p);
                break;
            case 2:
                int y;
                printf("The value to be deleted");
                scanf("%d",&y);
                d=deleteval(d,y);
                break;
            case 3:
                display(d);
                break;
        }
    }while(op<4);
}