typedef struct queue
{
    int front;
    int back;
    int *a;
    int size;
}que;
void create(int n);
int isfull();
int isempty();
int deque();
void enque();