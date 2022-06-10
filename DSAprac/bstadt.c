#include<stdio.h>
#include<stdlib.h>
#include"bst.h"
nod *insert(nod *root,int x)
{
    
    nod *t;
    t=(nod *)malloc(sizeof(nod));
    t->data=x;
    t->lchild=NULL;
    t->rchild=NULL;
   
    if(root==NULL)
    {
       
        root=t;
        
        return root;
    }
    else
    {
        
        nod *cur,*pre;
        pre=NULL;
        cur=root;
        while(cur!=NULL )
        {
            if(cur->data>x)
            {
                pre=cur;
                cur=cur->lchild;
            }
            else if(cur->data<x)
            {
                pre=cur;
                cur=cur->rchild;
            }
            else
            {
                printf("\n element already present");
                return root;
            }
           
        }
        if(pre->data>x)
        {
            pre->lchild=t;
        }
        else
        {
            pre->rchild=t;
        }
        printf("%d",root->data);
        return root;
    }
}
void search(nod *root,int x)
{
     printf("%d",root->data);
    if(root==NULL)
    {
        printf("\n empty bst");
        return;
    }
    nod *t;
    t=root;
    
    while(t!=NULL)
    {
       
        if(t->data<x)
        { 
            t=t->rchild;
        }
        else if(t->data>x)
        {
            
            t=t->rchild;
        }
        else
        {
            printf("\n element is present");
            return;
        }
    }
     printf("%d",root->data);
    printf("\n element is not present");
}
void preorde(nod *root)
{
    if(root!=NULL)
    {
        printf("\n%d",root->data);
        preorde(root->lchild);
        preorde(root->rchild);
    }
}
void inorder(nod *root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        printf("\n %d",root->data);
        inorder(root->rchild);
    }
}
void postorder(nod *root)
{
    if(root!=NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("\n %d",root->data);
    }
}
void maximum(nod *root)
{
    if(root==NULL)
    {
        printf("\n empty bst");
        return;
    }
    nod *t;
    t=root;
    while(t->rchild!=NULL)
    {
        t=t->rchild;
    }
    printf("\n maximum =%d",t->data);
}
void minimum(nod *root)
{
    if(root==NULL)
    {
        printf("\n empty bst");
        return;
    }
    nod *t;
    t=root;
    while(t->lchild!=NULL)
    {
        t=t->lchild;
    }
    printf("\n minimum =%d",t->data);
}
