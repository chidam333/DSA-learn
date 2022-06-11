#include<stdio.h>
#include"dll.c"
int main(){
    int op;
    pos po;
    po.first=NULL;
    po.last=NULL;
    do{
        int v;
        printf("1.Insert in beginning \n2.Insert at position p\n3.Insert in order\n4.Delete node by value\n5.Display the dll\n");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("Enter the value you want to input in beginning :");
                scanf("%d",&v);
                po=insbeg(po,v);
                break;
            case 2:
                int p;
                printf("Enter the value you want to input :");
                scanf("%d",&v);
                printf("Enter the position :");
                scanf("%d",&p);
                po=inspos(po,v,p);
                break;
            case 3:
                printf("Enter the value you want to input in order:");
                scanf("%d",&v);
                po=insord(po,v);
                break;
            case 4:
                printf("Enter the value you want to delete :");
                scanf("%d",&v);
                po=deletev(po,v);
                break;
            case 5:
                printf("=============The display==============\n");
                display(po);
                break;
        }
    }while(op<6);
}