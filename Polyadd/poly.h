typedef struct n{
    int coef;
    int exp;
    struct n * link;
}node;
typedef struct po{
    node *first;
    node *last;
}polynomial;
polynomial createpoly();
polynomial inspoly(polynomial p,int coef,int exp);
void display(polynomial p);