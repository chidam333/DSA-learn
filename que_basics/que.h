typedef struct q{
    int front;
    int rear;
    int *a;
    int size;
}que;
void create(int n);
int isfull();
int isempty();
void enque(int x);
int deque();