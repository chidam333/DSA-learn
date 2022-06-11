#include<stdio.h>
#include"circulardll.c"
int main(){
    node *first=NULL;
    int op;
    do{
        printf("\n1.Insbeg\n2.Inspos\n3.Insord\n4.Deleteval\n5.Display\n6.Break");
        scanf("%d",&op);
        switch(op){
            case 1:
                int x;
                printf("The value you want to insert in the beginning:");
                scanf("%d",&x);
                first=insbeg(first,x);
                break;
            case 2:
                int z;
                printf("The value you want to insert in the position:");
                scanf("%d",&z);
                int p;
                printf("Which position do you want to enter");
                scanf("%d",&p);
                first=inspos(first,z,p);
                break;
            case 3:
                int y;
                printf("The value you want to append in order");
                scanf("%d",&y);
                first=insord(first,y);
                break;
            case 4:
                int q;
                printf("Enter the value you want to delete :");
                scanf("%d",&q);
                first=deleteval(first,q);
                break;
            case 5:
                display(first);
                break;
        }

    }while(op<6);
}