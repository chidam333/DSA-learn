typedef struct tower
{
    int n;
    char sn;
    char in;
    char dn;
    int ra;
}element;
typedef struct s
{
    int top;
    int size;
    element *a;
}stack;
void create(int n);
void push(element x);
element pop();
element peek();
int isfull();
int isempty();
