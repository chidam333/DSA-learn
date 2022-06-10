typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}nod;
nod *insert(nod *root ,int x);
void preorde(nod *root);
void inorder(nod *root);
void postorder(nod *root);
void minimum(nod *root);
void maximum(nod *root);
void search(nod *root,int x);
