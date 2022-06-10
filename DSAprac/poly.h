typedef struct nod
{
    int coef;
    int expo;
    struct nod *link;
}node;
typedef struct po
{
    node *first;
    node *last;
}poly;
poly create();
poly insertinorder(poly p,int expo,int coef);
poly insertatend(poly p,int expo,int coef);
poly add(poly p,poly q);
void deletepoly(poly p);
void display(poly p);
