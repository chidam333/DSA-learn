typedef struct {
    int top;
    int *a;
}stack;
stack s;
void createstack(int max);
int isEmpty();
int isFull(int max);
void push(int n,int max);
int pop();