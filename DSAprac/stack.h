typedef struct stack
{
    int top;
    int *a;
    int size;
}sta;
void create(int n);
void push(int n);
int pop();
int peek();
int isfull();
int isempty();