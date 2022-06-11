typedef struct cdllnode{
    int x;
    struct cdllnode *next;
    struct cdllnode *prev;
}node;

node * insbeg(node * first,int x);
node * inspos(node * first,int x,int p);
node * insord(node * first,int x);
node * deleteval(node * first,int x);
void display(node *first);