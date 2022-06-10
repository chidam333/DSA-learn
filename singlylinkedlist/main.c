#include<stdio.h>
#include"slladt.c"
int main(){
    int op;
    singlelinkedlistnode *first=NULL;
    do{
        printf("\n1.Insert at beginning \n2.Insert at position p \n3.Display \n4.Insert at order \n5.Delete using value \n6.Exit");
        scanf("%d",&op);
        switch(op){
            case 1:
                int x;
                printf("The value to inserted in the beginning :");
                scanf("%d",&x);
                first = insbegsll(x,first);
                break;
            case 2:
                int p,y;
                printf("The value to inserted in the position :");
                scanf("%d",&y);
                printf("Enter position :");
                scanf("%d",&p);
                first= inspos(y,first,p);
                break;
            case 3:
                display(first);
                break;
            case 4:
                int z;
                printf("The value to inserted in ordered fashion :");
                scanf("%d",&z);
                first = insord(z,first);
                display(first);
                break;
            case 5:
                int k;
                printf("The value to be delted :");
                scanf("%d",&k);
                first=deletesllnode(k,first);
        }
    }while(op<6);
}