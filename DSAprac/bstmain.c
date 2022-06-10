#include<stdio.h>
#include"bstadt.c"
int main()
{
    nod *root=NULL;
    int x,op=1;
    while(op<6)
    {
        printf("\n enter ur choice\n1.insert\n2.search\n3.traversal\n4.minimum\n5.maximum\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:printf("\n enter the element u want to insert:");
                   scanf("%d",&x);
                   root=insert(root,x);
                   break;
            case 2:printf("\n enter elemtn u want to search:");
                   scanf("%d",&x);
                   search(root,x);
                   break;
            case 3: printf("\ninorder:");
                    inorder(root);
                    printf("\n preorder:");
                    preorde(root);
                    printf("\n postorder:");
                    postorder(root);
                    break;
            case 4 :minimum(root);
                    break;
            case 5 :maximum(root);
                     break;
        }
    }
    return 0;
}
