#include<stdio.h>
#include"dll.c"
int main(){
    int op;
    doubleLLnode *first=NULL;
    doubleLLnode *last=NULL;
    do{
        int v;
        printf("1.Insert in beginning \n2.Insert at position p\n3.Insert in order\n4.Delete node by value\n5.Display the dll\n");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("Enter the value you want to input in beginning :");
                scanf("%d",&v);
                first=insbeg(first,last,v);
                break;
            case 2:
                int p;
                printf("Enter the value you want to input :");
                scanf("%d",&v);
                printf("Enter the position :");
                scanf("%d",&p);
                first=inspos(first,last,v,p);
                break;
            case 3:
                printf("Enter the value you want to input in order:");
                scanf("%d",&v);
                first=insord(first,last,v);
                break;
            case 4:
                printf("Enter the value you want to delete :");
                scanf("%d",&v);
                first=deletev(first,last,v);
                break;
            case 5:
                printf("=============The display==============\n");
                display(first,last);
                break;
        }
    }while(op<6);
}