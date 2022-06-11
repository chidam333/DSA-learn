typedef struct dl{
    int data;
    struct dl *prev;
    struct dl *next;
}dllnode;
typedef struct d{
    dllnode *first;
    dllnode *last;
}dll;
dll inspos(dll d,int x,int p);
dll deleteval(dll d,int x);
void display(dll d);