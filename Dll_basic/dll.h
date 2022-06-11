typedef struct dll{
    int data;
    struct dll *next;
    struct dll *prev;
}doubleLLnode;
typedef struct p{
    doubleLLnode *first;
    doubleLLnode *last;
}pos;
pos insbeg(pos po,int x);
pos inspos(pos po,int x,int p);
pos insord(pos po,int x);
pos deletev(pos po,int x);
void display(pos po);