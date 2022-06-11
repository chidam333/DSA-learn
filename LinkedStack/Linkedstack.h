typedef struct n{
    int x;
    struct n *link;
}node;
node* push(node *top,int x);
node* pop(node *top);
void display(node *top);