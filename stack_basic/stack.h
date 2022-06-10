typedef struct s{
    int *a;
    int size;
    int top;
}stack;
void create(int n);
void push(int x);
int isfull();
int isempty();
int pop();