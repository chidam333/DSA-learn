typedef struct dll{
    int data;
    struct dll *next;
    struct dll *prev;
}doubleLLnode;
doubleLLnode *insbeg(doubleLLnode *first,doubleLLnode *last,int x);
doubleLLnode *inspos(doubleLLnode *first,doubleLLnode *last,int x,int p);
doubleLLnode *insord(doubleLLnode *first,doubleLLnode *last,int x);
doubleLLnode *deletev(doubleLLnode *first,doubleLLnode *last,int x);
void display(doubleLLnode *first,doubleLLnode *last);
